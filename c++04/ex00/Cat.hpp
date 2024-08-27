//
// Created by Joshua Franceschi on 12/30/23.
//

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat();
    Cat (std::string type );
    Cat( const Cat &p );
    Cat& operator=( const Cat &p );
    ~Cat();
    virtual void    makeSound() const;
};


#endif //UNTITLED_CAT_H
