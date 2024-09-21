#include "cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &other) {
    *this = other;
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other)
        this->type = other.type;
    return *this;
}

void    Cat::makeSound() const {
    std::cout << "Miao Miao" << std::endl;
}