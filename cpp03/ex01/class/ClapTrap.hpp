#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
protected:
    std::string name;
    int hitPoints = 10;
    int energyPoints = 10;
    int attackDamage = 0;

public:
    ClapTrap();
    ClapTrap(const std::string name);
    ClapTrap(ClapTrap& other);
    ClapTrap&   operator=(const ClapTrap& other);
    ~ClapTrap();

    void			attack(const std::string& target);
    void			takeDamage(unsigned int amount);
    void			beRepaired(unsigned int amount);

    void			setHitPoints(unsigned int amount);
	void			setEnergyPoints(unsigned int amount);
	void			setAttackDamage(unsigned int amount);

	std::string		getName();
	unsigned int	getAttackDamage();
};

#endif