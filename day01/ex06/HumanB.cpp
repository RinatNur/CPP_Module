//
// Created by Rinat Nurutdinow on 3/6/21.
//

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name){
	this->_szName = name;
	_WeaponB = NULL;
}

void HumanB::attack() {
	std::cout << _szName << " attacks with his " << _WeaponB->getType()
			  << std::endl;
}

void HumanB::setWeapon(Weapon &type){
	_WeaponB = &type;
}




