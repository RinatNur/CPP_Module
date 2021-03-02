//
// Created by Rinat Nurutdinow on 3/2/21.
//

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(const std::string &name, const std::string &type) {
	std::cout << "New zombie <" << name << "> created" << std::endl;
	_zombie_name = name;
	_zombie_type = type;
}

Zombie::~Zombie() {
	std::cout << "Zombie <" << this->_zombie_name << "> died. Memory cleared."
		<< std::endl;
}

void Zombie::announce() const {
	std::cout << "<" << this->_zombie_name << " (" << this->_zombie_type
		<< ")> Braiiiiiiinnnssss..." << std::endl;
}

