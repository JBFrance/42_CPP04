//
// Created by Joshua Franceschi on 01/16/24.
//

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << GREEN1 << "Default Brain constructor called" << RESET << std::endl;
}

Brain::Brain( const Brain &p )
{
    std::cout << BLUE1 << "Copy Brain constructor called" << RESET << std::endl;
    *this = p;
}

Brain& Brain::operator=(const Brain &p)
{
    std::cout << YELLOW1 << "Copy assignment operator called" << RESET << std::endl;
    if (this == &p)
        return (*this);
    for (int i = 0; i < 100; i++)
            this->ideas[i] = p.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << RED1 << "Brain destructor called" << RESET << std::endl;
}