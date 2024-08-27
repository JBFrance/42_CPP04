//
// Created by Joshua Franceschi on 12/30/23.
//
#include "AAnimal.hpp"
#include "Cat.hpp"

Cat::Cat(): AAnimal() {
    this->type = "Cat";
    std::cout << GREEN1 << "Cat default constructor called" << RESET << std::endl;
    brain = new Brain();
};

Cat::Cat(const Cat &p) : AAnimal(p) {
    std::cout << BLUE1 << "Cat copy constructor called" << RESET << std::endl;
    *this = p;
};

Cat& Cat::operator=( const Cat &p ) {
    std::cout << YELLOW1 << "Cat copy assignment called" << RESET << std::endl;
    if (this == &p)
        return (*this);
    this->type = p.type;
    delete this->brain;
    this->brain = new Brain(*p.brain);
    return *this;
};

Cat::~Cat() {
    delete brain;
    std::cout << RED1 << "Cat destructor called" << RESET << std::endl;
};

void    Cat::makeSound() const {
    std::cout << "Meow Meow" << std::endl;
};