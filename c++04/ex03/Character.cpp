#include "Character.hpp"
#define RED1 "\033[31m"
#define GREEN1 "\033[32m"
#define YELLOW1 "\033[33m"
#define BLUE1 "\033[34m"
#define RESET "\033[0m"


AMateria* unequiped[20];
int unequipedItems = 0;

void    Character::nullifyUnequiped(AMateria** unequiped) {
    for (int i = 0; i < 20 ; i++)
        unequiped[i] = NULL;
}

Character::Character() {
    this->_name = "no name";
    std::cout << GREEN1 << "Character default constructor called" << RESET << std::endl;
}

Character::Character(const std::string& name) : _name(name) {
    std::cout << GREEN1 << "Character constructor called" << RESET << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    this->_items = 0;
    Character::nullifyUnequiped(unequiped);
}

Character::Character(const Character& toCopy) {
    std::cout << BLUE1 << "Character copy constructor called" << RESET << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    *this = toCopy;
}

Character& Character::operator=(const Character& src) {
    this->_name = src._name;
    this->_items = src._items;
    for (int i = 0; i < 4; i++) {
        if (this->_inventory[i] != NULL)
            delete this->_inventory[i];
        this->_inventory[i] = src._inventory[i];
    }
    return (*this);
}

std::string const& Character::getName() const{
    return (this->_name);
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < _items; i++)
    {
        if (this->_inventory[i] == m) {
          std::cout <<  "Item already in inventory!" << std::endl;
          return ;
        }
    }
    if (_items >= 4)
        std::cout <<  "Inventory is full. You must unequip items to equip new items" << std::endl;
    else {
        this->_inventory[_items] = m;
        _items++;
         std::cout << m->getType() << " item now equiped to inventory." << std::endl;
    }
}

void Character::unequip(int idx) {
    if (idx > 3) {
            std::cout << "Invalid Index" << std::endl;
            return ;
    }
    if (this->_inventory[idx] != NULL) {
        if (unequipedItems >= 20) 
            std::cout << "No where left to unequip item!" << std::endl;
        else {
            unequiped[unequipedItems] = this->_inventory[idx];
            this->_inventory[idx] = NULL;
            unequipedItems++;
            this->_items--;
            std::cout <<unequiped[unequipedItems - 1]->getType() << " has been unequiped to location "
            << unequipedItems - 1 << std::endl;
        }
    }
    else 
        std::cout << "Invalid inventory index" << std::endl;
      
}

void Character::use(int idx, ICharacter& target) {
      std::cout << this->getName() << " has used " << _inventory[idx]->getType() << " on " << target.getName() << std::endl;
}

AMateria** Character::checkUnequiped() {
    return unequiped;
}

AMateria** Character::checkEquiped() {
    return _inventory;
}

Character::~Character() {
    std::cout << RED1 << "Character destructor called" << RESET << std::endl;

    for (int i = 0; i < _items; i++) {
        if (_inventory[i] != NULL)
        {
            for (int x = 0; x < unequipedItems; x++) {
                if (unequiped[x] == _inventory[i])
                    unequiped[x] = NULL;
            }
        }
    }
    for (int i = 0; i < unequipedItems; i++) {
        if (unequiped[i] != NULL) {
            delete unequiped[i];
             _inventory[i] = NULL;
        }
    }
}