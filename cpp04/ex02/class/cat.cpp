#include "cat.hpp"

Cat::Cat() : Animal() {
    type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat constructor called!" << std::endl;
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat(const Cat &other) {
    *this = other;
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other) {
        this->type = other.type;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

void    Cat::makeSound() const {
    std::cout << "Miao Miao" << std::endl;
}