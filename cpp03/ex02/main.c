#include "class/Fragtrap.hpp"

int main()
{
    FragTrap user;
    FragTrap user2("Alessio");

    user.highFivesGuys();
    user2.highFivesGuys();
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