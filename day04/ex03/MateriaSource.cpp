//
// Created by Rinat Nurutdinow on 3/20/21.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : nAmountMatSource_(0) {
//	for (int i = 0; i < 4; ++i)
//		MateriaSource_[i] = nullptr;
	MateriaSource_[0] = nullptr;
	MateriaSource_[1] = nullptr;
	MateriaSource_[2] = nullptr;
	MateriaSource_[3] = nullptr;
//	this->nAmountMatSource_ = 0;
}

MateriaSource::MateriaSource(const MateriaSource &copy_obj) {
	operator=(copy_obj);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj_to_assign) {
	if (this != &obj_to_assign && obj_to_assign.nAmountMatSource_)
	{
		for (int i = 0; i < this->nAmountMatSource_; ++i)
			delete this->MateriaSource_[i];
		delete *this->MateriaSource_;

		for(int i = 0; i < 4; ++i)
			this->MateriaSource_[i] = obj_to_assign.MateriaSource_[i];
		this->nAmountMatSource_ = obj_to_assign.nAmountMatSource_;
	}
	return *this;
}

MateriaSource::~MateriaSource() {
//	if (this && this->nAmountMatSource_)
	{
		for(int i = 0; i < nAmountMatSource_; ++i)
			delete this->MateriaSource_[i];
//		delete  *this->MateriaArr_;
	}
}

void MateriaSource::learnMateria(AMateria *materia) {
		if (this->nAmountMatSource_ < 4)
			this->MateriaSource_[nAmountMatSource_++] = materia;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < this->nAmountMatSource_; ++i) {
		if(this->MateriaSource_[i]->getType() == type)
			return (this->MateriaSource_[i]->clone());
	}
	return nullptr;
}
