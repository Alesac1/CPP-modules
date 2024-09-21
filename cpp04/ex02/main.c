#include "class/Animal.hpp"
#include "class/cat.hpp"
#include "class/Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    
	
	return 0;
}