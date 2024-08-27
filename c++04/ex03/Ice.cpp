#include "Ice.hpp"
#include "AMateria.hpp"
#define RED1 "\033[31m"
#define GREEN1 "\033[32m"
#define YELLOW1 "\033[33m"
#define BLUE1 "\033[34m"
#define RESET "\033[0m"

Ice::Ice()  {
    std::cout << GREEN1 << "Ice constructor called" << RESET << std::endl;
    this->_type = "Ice";
}

Ice::Ice(const Ice& toCopy) {
     std::cout << BLUE1 << "Ice copy constructor called" << RESET << std::endl;
     *this = toCopy;
}

Ice&    Ice::operator =(const Ice& src) {
    if (this == &src)
        return (*this);
    this->_type = src._type;
    return (*this);
}

AMateria* Ice::clone() const {
    return (new Ice(*this));
}

std::string const& Ice::getType() const {
    return (this->_type);
}

void    Ice::setType(const std::string newType) {
    this->_type = newType;
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
    std::cout << RED1 << this->_type << " destructor called!" << RESET << std::endl;
}