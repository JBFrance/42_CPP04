//
// Created by Joshua Franceschi on 12/30/23.
//

#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
    private:
        Brain* brain;
    public:
        Cat();
        Cat (std::string type );
        Cat( const Cat &p );
        Cat& operator=( const Cat &p );
        ~Cat();
        virtual void    makeSound() const;
};


#endif
