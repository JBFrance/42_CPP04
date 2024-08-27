//
// Created by Joshua Franceschi on 12/30/23.
//

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    Dog (std::string type );
    Dog( const Dog &p );
    Dog& operator=( const Dog &p );
    ~Dog();
    void    makeSound() const;
};


#endif //UNTITLED_DOG_H
