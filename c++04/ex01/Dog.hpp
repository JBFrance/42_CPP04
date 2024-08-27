//
// Created by Joshua Franceschi on 12/30/23.
//

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain* brain;
    public:
        Dog();
        Dog (std::string type );
        Dog( const Dog &p );
        Dog& operator=( const Dog &p );
        ~Dog();
        void    makeSound() const;
};


#endif
