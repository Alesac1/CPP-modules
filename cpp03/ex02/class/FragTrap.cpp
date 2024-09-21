#include "Fragtrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap Costructed!" << std::endl;
    this->name = "FragTrap";
    setEnergyPoints(100);
    setHitPoints(100);
    setAttackDamage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap " << name << " constructed!" << std::endl;
    setEnergyPoints(100);
    setHitPoints(100);
    setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap &other) {
    *this = other;
}

FragTrap&   FragTrap::operator=(const FragTrap &other) {
    if (this != &other){
        this->name = other.name;
        setAttackDamage(other.attackDamage);
        setEnergyPoints(other.energyPoints);
        setHitPoints(other.hitPoints);
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << getName() << " destroyed!" << std::endl;
}

void    FragTrap::highFivesGuys() {
    std::cout << getName() << " requests a high five!" << std::endl;
}