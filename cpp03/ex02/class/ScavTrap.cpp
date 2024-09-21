#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap " << name << " constructed!" << std::endl;
    setEnergyPoints(50);
    setHitPoints(100);
    setAttackDamage(20);
}

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "Constructor for Scavtrap has been called!" << std::endl;
    this->name = "ScavTrap";
    setEnergyPoints(50);
    setHitPoints(100);
    setAttackDamage(20);
}

ScavTrap::ScavTrap(ScavTrap &other) {
    *this = other;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other){
        this->name = other.name;
        setAttackDamage(other.attackDamage);
        setEnergyPoints(other.energyPoints);
        setHitPoints(other.hitPoints);
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << getName() << " destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->energyPoints > 0) { 
        setEnergyPoints(this->energyPoints - 1);
		std::cout << "ScavTrap " << getName() << " attacks " << target
			<< " causing " << getAttackDamage() << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << getName() << " doesn't have enough energy to attack!" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
}
