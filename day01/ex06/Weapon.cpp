//
// Created by Rinat Nurutdinow on 3/6/21.
//

#include "Weapon.hpp"

std::string Weapon::getType() {
	return this->_szType;
}

Weapon::Weapon(std::string str) : _szType(str) {

}

void Weapon::setType(const std::string &type) {
	this->_szType = type;
}

Weapon& Weapon::operator=(Weapon const &copy)
{
	_szType = copy._szType;
	return (*this);
}
