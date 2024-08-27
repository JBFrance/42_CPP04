#include "MateriaSource.hpp"
#include "AMateria.hpp"
#define RED1 "\033[31m"
#define GREEN1 "\033[32m"
#define YELLOW1 "\033[33m"
#define BLUE1 "\033[34m"
#define RESET "\033[0m"


MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        this->materials[i] = NULL;
    this->totalMaterials = 0;
}

MateriaSource::MateriaSource(const MateriaSource& toCopy) {
    std::cout << BLUE1 << "MateriaSource copy constructor called" << RESET << std::endl;
    *this = toCopy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src) {
    std::cout << YELLOW1 << "MateriaSource equal operator called" << RESET << std::endl;
    if (this == &src)
        return *this;
    for (int i = 0; i < 4; i++) {
        if (this->materials[i] != NULL)
            delete this->materials[i];
        this->materials[i] = src.materials[i];
    }
    this->totalMaterials = 0;
    return (*this);
}


MateriaSource::~MateriaSource() {
    std::cout<< RED1 << "MateriaSource destructor called" << RESET << std::endl;
}

void MateriaSource::learnMateria(AMateria* ptr) {
    if (this->totalMaterials < 4) {
        this->materials[totalMaterials] = ptr;
        totalMaterials++;
        std::cout << "Material Learned" << std::endl;
    } else {
        std::cout << "Materials full, unable to learn" << std::endl;
    }
}


AMateria* MateriaSource:: createMateria(std::string const& type) {
    for (int i = 0; i < this->totalMaterials; i++) {
        if (this->materials[i]->getType() == type) 
            return this->materials[i]->clone();
    }
    std::cout << "Material not found, unable to create" << std::endl;
    return NULL;
}
