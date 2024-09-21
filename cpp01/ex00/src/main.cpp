#include "../Zombie.h"

int main()
{
    Zombie zombie("Alessio");
    Zombie *zombie2 = newZombie("Marco");

    zombie2->announce();
    randomChump("Valentino");
    zombie.announce();

    delete zombie2;

    return 0;
}