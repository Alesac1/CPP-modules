#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type){
	return;
}

Weapon::~Weapon()
{
	return;
}

const std::string Weapon::getType() const {
	return type;
}

void Weapon::setType(std::string newType) {
	type = newType;
}

