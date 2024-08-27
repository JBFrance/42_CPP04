//
// Created by Joshua Franceschi on 01/16/24.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP
#define RED1 "\033[31m"
#define GREEN1 "\033[32m"
#define YELLOW1 "\033[33m"
#define BLUE1 "\033[34m"
#define RESET "\033[0m"
#include <iostream>

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain( const Brain &p );
        Brain& operator=(const Brain &p);
        ~Brain();
};

#endif