#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Animal") {
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string value) : type(value) {
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    if (this != &other){

    }
    return *this;
}

void    WrongAnimal::makesound() const {
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}