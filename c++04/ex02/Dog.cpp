//
// Created by Joshua Franceschi on 12/30/23.
//

#include "Dog.hpp"
#include "AAnimal.hpp"

Dog::Dog(): AAnimal() {
    this->type = "Dog";
    std::cout << GREEN1 << "Dog default constructor called" << RESET << std::endl;
    brain = new Brain();
};

Dog::Dog(const Dog &p) : AAnimal(p) {
    std::cout << BLUE1 << "Dog copy constructor called" << RESET << std::endl;
    *this = p;
};

Dog& Dog::operator=( const Dog &p ) {
    std::cout << YELLOW1 << "Dog copy assignment called" << RESET << std::endl;
    if (this == &p)
        return (*this);
    this->type = p.type;
    delete this->brain;
    this->brain = new Brain(*p.brain);
    return (*this);
};

Dog::~Dog() {
    delete brain;
    std::cout << RED1 << "Dog destructor called" << RESET << std::endl;
};

void    Dog::makeSound() const {
    std::cout << "Roof Roof" << std::endl;
};