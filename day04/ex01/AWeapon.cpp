//
// Created by Rinat Nurutdinow on 3/18/21.
//

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage) {
	this->szName_ = name;
	this->nApCost_ = apcost;
	this->nDamage_ = damage;
}

AWeapon::AWeapon(const AWeapon &copy_obj) {
	operator=(copy_obj);
}

AWeapon &AWeapon::operator=(const AWeapon &objToAssign) {
	if (this != &objToAssign)
	{
		this->szName_ = objToAssign.szName_;
		this->nApCost_ = objToAssign.nApCost_;
		this->nDamage_ = objToAssign.nApCost_;
	}
	return *this;
}

AWeapon::~AWeapon() {

}

std::string AWeapon::getName() const {
	return this->szName_;
}

int AWeapon::getAPCost() const {
	return this->nApCost_;
}

int AWeapon::getDamage() const {
	return nDamage_;
}

