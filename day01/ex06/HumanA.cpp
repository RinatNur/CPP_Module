//
// Created by Rinat Nurutdinow on 3/6/21.
//

#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << szName << " attacks with his " << szType.getType()
		<< std::endl;
}

HumanA::HumanA(std::string name, Weapon szType) : szType(szType) {
	this->szName = name;
}
