//
// Created by Rinat Nurutdinow on 3/6/21.
//

#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << _szName << " attacks with his " << _WeaponA.getType()
			  << std::endl;
}

HumanA::HumanA(const std::string &name, Weapon &Type) : _WeaponA(Type) {
	this->_szName = name;
}
