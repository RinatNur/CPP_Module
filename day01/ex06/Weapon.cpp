//
// Created by Rinat Nurutdinow on 3/6/21.
//

#include "Weapon.hpp"

std::string Weapon::getType() {
	return this->szType;
}

Weapon::Weapon(std::string str) : szType(str){

}

void Weapon::setType(std::string type) {
	this->szType = type;
}
