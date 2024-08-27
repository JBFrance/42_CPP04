//
// Created by Joshua Franceschi on 12/29/23.
//

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal default constructor called" << std::endl;
};

Animal& Animal::operator=(const Animal &p) {
    std::cout << "Animal copy constructor called" << std::endl;
    if (this == &p)
        return (*this);
    this->type = p.type;
    return *this;
};

Animal::Animal(const Animal &p) {
    std::cout << "Animal copy assignment called" << std::endl;
    this->type = p.type;
};

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
};

std::string Animal::getType() const {
    return this->type;
};

void    Animal::setType(std::string type) {
    this->type = type;
};

void    Animal::makeSound() const {
    std::cout << "Animal Noises!" << std::endl;
};