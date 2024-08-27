//
// Created by Joshua Franceschi on 12/30/23.
//

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(): Animal() {
    this->type = "Dog";
    std::cout << GREEN1 << "Dog default constructor called" << RESET << std::endl;
    brain = new Brain();
};

Dog::Dog(const Dog &p) : Animal(p) {
    std::cout << BLUE1 << "Dog copy constructor called" << RESET << std::endl;
    *this = p;
};

Dog& Dog::operator=( const Dog &p ) {
    std::cout << YELLOW1 << "Dog copy assignment called" << RESET << std::endl;
    if (this == &p)
        return (*this);
    delete this->brain;
    this->type = p.type;
    brain = new Brain();
    *this->brain = *p.brain;
    return *this;
};

Dog::~Dog() {
    delete brain;
    std::cout << RED1 << "Dog destructor called" << RESET << std::endl;
};

void    Dog::makeSound() const {
    std::cout << "Roof Roof" << std::endl;
};