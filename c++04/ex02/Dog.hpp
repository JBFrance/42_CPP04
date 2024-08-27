//
// Created by Joshua Franceschi on 12/30/23.
//

#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
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
