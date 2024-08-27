//
// Created by Joshua Franceschi on 12/30/23.
//
#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(): Animal() {
    this->type = "Cat";
    std::cout << GREEN1 << "Cat default constructor called" << RESET << std::endl;
    brain = new Brain();
};

Cat::Cat(const Cat &p) : Animal(p) {
    std::cout << BLUE1 << "Cat copy constructor called" << RESET << std::endl;
    *this = p;
};

Cat& Cat::operator=( const Cat &p ) {
    std::cout << YELLOW1 << "Cat copy assignment called" << RESET << std::endl;
    if (this == &p)
        return (*this);
    delete this->brain;
    this->type = p.type;
    brain = new Brain();
    *this->brain = *p.brain;
    return *this;
};

Cat::~Cat() {
    delete brain;
    std::cout << RED1 << "Cat destructor called" << RESET << std::endl;
};

void    Cat::makeSound() const {
    std::cout << "Meow Meow" << std::endl;
};