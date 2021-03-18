//
// Created by Rinat Nurutdinow on 3/18/21.
//

#include "Character.hpp"

Character::Character(std::string const & name) : nMaxAp_(40) {
	this->szName_ = name;
	this->nAp_ = 40;
	this->Weapon_ = NULL;
}

Character::Character(const Character &copy_obj) : nMaxAp_(40) {
	operator=(copy_obj);
}

Character &Character::operator=(const Character &objToAssign) {
	if (this != &objToAssign)
		this->szName_ = objToAssign.szName_;
	return *this;
}

Character::~Character() {

}

void Character::recoverAP() {
	this->nAp_ += 10;
	this->nAp_ = this->nAp_ > this->nMaxAp_ ? this->nMaxAp_ : this->nAp_;
}

void Character::equip(AWeapon * weapon) {
	this->Weapon_ = weapon;
}

void Character::attack(Enemy * target) {
	if (Weapon_ && this->nAp_ >= this->Weapon_->getAPCost()) {
		std::cout << this->szName_ << " attacks " << target->getType() << " with a " << this->Weapon_->getName()
				  << std::endl;
		this->nAp_ -= Weapon_->getAPCost();
		this->Weapon_->attack();
		target->takeDamage(this->Weapon_->getDamage());
		if(target->getHP() <= 0)
			delete target;
	}

}

std::string Character::getName() const {
	return this->szName_;
}

AWeapon *Character::getWeapon() const {
	return Weapon_;
}

std::string Character::getWeaponName() const {
	return Weapon_->getName();
}

int Character::getAp() const {
	return this->nAp_;
}

std::ostream& operator<<(std::ostream& o, const Character &obj)
{
	if (obj.getWeapon())
		o << obj.getName() << " has " << obj.getAp() << " AP and wields a " << obj.getWeaponName() << "\n";
	else
		o << obj.getName() << " has " << obj.getAp() << " AP and is unarmed\n";
	return o;
}
