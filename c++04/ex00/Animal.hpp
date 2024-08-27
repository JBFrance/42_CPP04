//
// Created by Joshua Franceschi on 12/29/23.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#define RED1 "\033[31m"
#define GREEN1 "\033[32m"
#define YELLOW1 "\033[33m"
#define BLUE1 "\033[34m"
#define RESET "\033[0m"

class Animal {
protected:
    std::string type;
public:
    Animal();
    Animal (std::string type );
    Animal( const Animal &p );
    void operator=( const Animal &p );
    virtual ~Animal();

    std::string getType() const;
    void   setType(std::string type);

    virtual void    makeSound() const;
};


#endif //UNTITLED_ANIMAL_H
