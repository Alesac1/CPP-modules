#ifndef	HUMANB_HPP
# define HUMAN_HPP

#include "Weapon.hpp"

class HumanB {
private:
	std::string _name;
	Weapon* _weapon;

public:
	HumanB(const std::string& name);
	~HumanB();

	void setWeapon(Weapon& weapon);
	void attack() const;
};

#endif