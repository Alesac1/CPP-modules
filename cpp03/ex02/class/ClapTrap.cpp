 #include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap") {
    std::cout << "Constructor for ClapTrap has been called!" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " constructed!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& other) {
    *this = other;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other){
        this->name = other.name;
        setAttackDamage(other.attackDamage);
        setEnergyPoints(other.energyPoints);
        setHitPoints(other.hitPoints);
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (energyPoints > 0 && hitPoints > 0) {
        energyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target
                  << ", causing " << attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " doesn't have enough energy to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    hitPoints -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
	if (this->hitPoints <= 0)
		std::cout
			<< getName()
			<< " was slain!"
			<< std::endl;
	else
		std::cout
			<< getName()
			<< " now has "
			<< this->hitPoints
			<< " HitPoints"
			<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints > 0 && hitPoints > 0) {
        energyPoints--;
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points!" << std::endl;
		std::cout << getName() << " now has " << this->hitPoints << " HitPoints" << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " doesn't have enough energy to be repaired!" << std::endl;
    }
}

void	ClapTrap::setHitPoints(unsigned int amount) {
	this->hitPoints = amount;
}

void	ClapTrap::setEnergyPoints(unsigned int amount) {
	this->energyPoints = amount;
}

void	ClapTrap::setAttackDamage(unsigned int amount) {
	this->attackDamage = amount;
}

std::string		ClapTrap::getName() {
	return this->name;
}

unsigned int	ClapTrap::getAttackDamage() {
	return this->attackDamage;
}