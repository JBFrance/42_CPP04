//
// Created by Joshua Franceschi on 12/29/23.
//

#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#define RED1 "\033[31m"
#define GREEN1 "\033[32m"
#define YELLOW1 "\033[33m"
#define BLUE1 "\033[34m"
#define RESET "\033[0m"
#include <iostream>

class AAnimal {
protected:
    AAnimal();
    std::string type;
public:
    AAnimal (std::string type );
    AAnimal( const AAnimal &p );
    AAnimal& operator=( const AAnimal &p );
    virtual ~AAnimal();

    std::string getType() const;
    void   setType(std::string type);

    virtual void    makeSound() const = 0;
};


#endif
