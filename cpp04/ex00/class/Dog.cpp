#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &other) {
    *this = other;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other)
        this->type = other.type;
    return *this;
}

void    Dog::makeSound() const {
    std::cout << "BAU BAU!" << std::endl;
}