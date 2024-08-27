//
// Created by Joshua Franceschi on 12/29/23.
//

#include "Animal.hpp"

Animal::Animal() {
    std::cout << GREEN1 << "Animal default constructor called" << RESET << std::endl;
};

void Animal::operator=(const Animal &p) {
    std::cout << YELLOW1 << "Animal assignment called" << RESET << std::endl;
    if (this == &p)
        return ;
    this->type = p.type;
};

Animal::Animal(const Animal &p) {
    std::cout << BLUE1 << "Animal copy constructor called" << RESET << std::endl;
    this->type = p.type;
};

Animal::~Animal() {
    std::cout << RED1 << "Animal destructor called" << RESET << std::endl;
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