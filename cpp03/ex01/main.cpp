#include "class/ScavTrap.hpp"

int main()
{
    ScavTrap user;
    ScavTrap user2("Alessio");

    user2.setAttackDamage(10);
    user.setAttackDamage(1);
    user.setEnergyPoints(1);

    user.attack(user2.getName());
    user2.takeDamage(user.getAttackDamage());
    user.attack(user2.getName());
    user2.beRepaired(10);
    user2.attack(user.getName());
    user.takeDamage(user2.getAttackDamage());

    return 0;
}