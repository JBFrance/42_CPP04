#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat( std::string type ) : WrongAnimal( type ) {
    std::cout << "WrongCat name constructor called" << std::endl;
    this->type = type;
}

WrongCat::WrongCat( const WrongCat &p ) : WrongAnimal( p ) {
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat &p ) {
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    if (this != &p) {
        WrongAnimal::operator = (p);
    }
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat make noise llllllll" << std::endl;
}