#include "AMateria.hpp"
#define RED1 "\033[31m"
#define GREEN1 "\033[32m"
#define YELLOW1 "\033[33m"
#define BLUE1 "\033[34m"
#define RESET "\033[0m"

AMateria::AMateria() {
    // this->_type = "Default type";
    // std::cout << _type << " material constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) {
    this->_type = type;
    std::cout << GREEN1 << _type << " materia constructor called" << RESET << std::endl;
}


AMateria::AMateria(const AMateria& toCopy) {
    std::cout << BLUE1 << this->_type << " materia copy constructor called" << RESET << std::endl;
    *this = toCopy;
}

AMateria& AMateria::operator=(const AMateria& src) {
    std::cout << YELLOW1 << this->_type << " materia assignment operator overload called" << RESET << std::endl;
    if (this == &src)
        return (*this);
    this->_type = src._type;
    return (*this);
}

AMateria::~AMateria() {
     std::cout << RED1 << _type << "Default materia destructor called" << RESET << std::endl;
}