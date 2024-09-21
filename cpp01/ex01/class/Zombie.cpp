#include "Zombie.hpp"

Zombie::Zombie() {

}

Zombie::~Zombie() {
    std::cout << "" << name << " is destroyed." << std::endl;
}

void	Zombie::setName(std::string zombieName) {
    name = zombieName;
}

void	Zombie::announce() {
	std::cout<< "Braiiiiiiinnnzzz..." << std::endl;
}