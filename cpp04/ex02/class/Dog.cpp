#include "Dog.hpp"

Dog::Dog() : Animal() {
    type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog constructor called!" << std::endl;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "Dog destructor called!" << std::endl;
}

Dog::Dog(const Dog &other) {
    *this = other;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other){
        this->type = other.type;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

void    Dog::makeSound() const {
    std::cout << "BAU BAU!" << std::endl;
}