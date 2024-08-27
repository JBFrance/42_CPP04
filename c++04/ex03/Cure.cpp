#include "Cure.hpp"
#include "AMateria.hpp"
#define RED1 "\033[31m"
#define GREEN1 "\033[32m"
#define YELLOW1 "\033[33m"
#define BLUE1 "\033[34m"
#define RESET "\033[0m"


Cure::Cure()
{
    std::cout << GREEN1 << "Cure constructor called" << RESET << std::endl;
    this->_type = "Cure";
}

Cure::Cure(const Cure& toCopy) {
     std::cout << BLUE1 << "Cure copy constructor called" << RESET << std::endl;
     *this = toCopy;
}

Cure&    Cure::operator =(const Cure& src) {
    if (this == &src)
        return (*this);
    this->_type = src._type;
    return (*this);
}

AMateria* Cure::clone() const {
    return (new Cure(*this));
}

std::string const& Cure::getType() const {
    return (this->_type);
}

void    Cure::setType(const std::string newType) {
    this->_type = newType;
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
    std::cout << RED1 << this->_type << " destructor called" << std::endl;
}