//
// Created by Joshua Franceschi on 12/29/23.
//

#include "AAnimal.hpp"

AAnimal::AAnimal() {
    std::cout << "Animal default constructor called" << std::endl;
};

AAnimal& AAnimal::operator=(const AAnimal &p) {
    std::cout << "Animal copy constructor called" << std::endl;
    if (this == &p)
        return (*this);
    this->type = p.type;
    return *this;
};

AAnimal::AAnimal(const AAnimal &p) {
    std::cout << "Animal assignment called" << std::endl;
    this->type = p.type;
};

AAnimal::~AAnimal() {
    std::cout << "Animal destructor called" << std::endl;
};

std::string AAnimal::getType() const {
    return this->type;
};

void    AAnimal::setType(std::string type) {
    this->type = type;
};

