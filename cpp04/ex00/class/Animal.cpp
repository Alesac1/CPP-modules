#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string value) :type(value) {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
    *this = other;
}

Animal &Animal::operator=(const Animal &other) {
    if (this != &other)
        this->type = other.type;
    return *this;
}

void    Animal::makeSound() const {
    std::cout << "Generical animal sound" << std::endl;
}

std::string Animal::getType() const {
    return type;
}