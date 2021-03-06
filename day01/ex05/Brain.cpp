//
// Created by Rinat Nurutdinow on 3/4/21.
//

#include <iostream>
#include <string>
#include <sstream>
#include "Brain.hpp"

std::string Brain::identify() const{
	std::stringstream address;
	address << this;
	return (address.str());
}

Brain::Brain() {
	szIq = 99;
	weight = 2;
}
