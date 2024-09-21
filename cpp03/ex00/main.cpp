#include "class/ClapTrap.hpp"

int main() {

    ClapTrap user("Alessio");
    ClapTrap user2("Osso");

	user.setEnergyPoints(1);
    user.setAttackDamage(1);
    user2.setAttackDamage(10);
    user.attack(user2.getName());
    user2.takeDamage(user.getAttackDamage());
    user.attack(user2.getName());
    user2.beRepaired(10);
    user2.attack(user.getName());
    user.takeDamage(user2.getAttackDamage());   
}