//
// Created by Rinat Nurutdinow on 3/6/21.
//

#include "Weapon.hpp"

std::string Weapon::getType() {
	return this->szType;
}

Weapon::Weapon(std::string str) : szType(str) {

}

void Weapon::setType(const std::string &type) {
	this->szType = type;
}

//Weapon::Weapon(const Weapon &copy) : szType(copy.szType)
//{
//}

//Weapon &Weapon::operator=(const Weapon &copy)
//{
//	szType = copy.szType;
//	return *this;
//}
