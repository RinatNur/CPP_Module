//
// Created by Rinat Nurutdinow on 3/6/21.
//

#include "HumanB.hpp"

void HumanB::attack() {
	std::cout << szName << " attacks with his " << szType->getType()
			  << std::endl;
}

HumanB::HumanB(std::string name) {
	this->szName = name;
}
