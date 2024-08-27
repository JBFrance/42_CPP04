#include <iostream>
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{

    const AAnimal* i = new Cat();
    const Dog* j = new Dog();
    delete i;
    delete j; 
    Dog p;
    {
        Dog a = Dog(p);
    }
    const AAnimal *arr[4];
    for(int i = 0; i < 4; i++)
        i < 2 ? arr[i] = new Dog() : arr[i] = new Cat();
    for(int i = 0; i < 4; i++)
        delete arr[i];
    return 0;
}
