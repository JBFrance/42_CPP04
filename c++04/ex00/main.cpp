#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){
    {
    WrongAnimal *wrongAnimal = new WrongAnimal();
    WrongAnimal *wrongCat = new WrongCat();
    WrongCat *wrongCat1 = new WrongCat();

    wrongAnimal->makeSound();
    wrongCat->makeSound();
    wrongCat1->makeSound();
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    meta->makeSound();
    j->makeSound();
    i->makeSound();

    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // std::cout << j->getType() << " " << std::endl;
    // j->makeSound();
    // meta->makeSound();

    delete wrongAnimal;
    delete wrongCat;
    delete wrongCat1;
    delete meta;
    delete j;
    delete i;
  }
  {
    // system("leaks Polymorphism");
  }
}
