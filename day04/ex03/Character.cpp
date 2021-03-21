//
// Created by Rinat Nurutdinow on 3/20/21.
//

#include "Character.hpp"

Character::Character(const std::string& szName) {
	this->szName_ =szName;
	this->nAmmountMateria_ = 0;
}

Character::Character(const Character &copy_obj){
	operator=(copy_obj);
}

Character &Character::operator=(const Character &objToAssign) {
	if (this != &objToAssign && objToAssign.nAmmountMateria_)
	{
		for (int i = 0; i < this->nAmmountMateria_; ++i)
			delete this->MateriaArr_[i];
//		delete *this->MateriaArr_;

		for(int i = 0; i < objToAssign.nAmmountMateria_; ++i)
			this->MateriaArr_[i] = objToAssign.MateriaArr_[i];
		this->nAmmountMateria_ = objToAssign.nAmmountMateria_;
	}
	this->szName_ = objToAssign.szName_;
	return *this;
}

Character::~Character() {
	if (this->nAmmountMateria_)
	{
		for(int i = 0; i < nAmmountMateria_; ++i)
			delete this->MateriaArr_[i];
//		delete  *this->MateriaArr_;
	}
}

void Character::equip(AMateria * m) {
	if (this->nAmmountMateria_ < 4) {
		this->MateriaArr_[this->nAmmountMateria_] = m;
		this->nAmmountMateria_++;
	}
}

void Character::unequip(int idx) {

}

void Character::use(int idx, ICharacter &target) {
	this->MateriaArr_[idx - 1]->use(target);
}

std::string const & Character::getName() const {
	return this->szName_;
}



//std::ostream& operator<<(std::ostream& o, const Character &obj)
//{
//	if (obj.getWeapon())
//		o << obj.getName() << " has " << obj.getAp() << " AP and wields a " << obj.getWeaponName() << "\n";
//	else
//		o << obj.getName() << " has " << obj.getAp() << " AP and is unarmed\n";
//	return o;
//}
