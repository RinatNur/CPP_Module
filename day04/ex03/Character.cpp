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
		for (int i = 0; i < this->nAmmountMateria_; ++i) {
			delete this->MateriaArr_[i];
			this->MateriaArr_[i] = nullptr;
		}

		for(int i = 0; i < objToAssign.nAmmountMateria_; ++i)
			this->MateriaArr_[i] = objToAssign.MateriaArr_[i]->clone();
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
	}
}

void Character::equip(AMateria * m) {
	if (this->nAmmountMateria_ < 4) {
		this->MateriaArr_[this->nAmmountMateria_] = m;
		this->nAmmountMateria_++;
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < this->nAmmountMateria_)
	{
		this->MateriaArr_[idx] = nullptr;
		for (int i = idx; i < this->nAmmountMateria_ - 1; ++i)
		{
			this->MateriaArr_[i] = this->MateriaArr_[i + 1];
			this->MateriaArr_[i + 1] = nullptr;
		}
		this->nAmmountMateria_--;
	}

}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < this->nAmmountMateria_ && this->MateriaArr_[idx])
		this->MateriaArr_[idx]->use(target);
}

std::string const & Character::getName() const {
	return this->szName_;
}
