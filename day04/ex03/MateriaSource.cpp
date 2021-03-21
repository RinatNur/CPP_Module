//
// Created by Rinat Nurutdinow on 3/20/21.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : nAmountMatSource_(0) {
	for (int i = 0; i < 4; ++i)
		MateriaSource_[i] = nullptr;
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
			this->MateriaSource_[i] = obj_to_assign.MateriaSource_[i]->clone();
		this->nAmountMatSource_ = obj_to_assign.nAmountMatSource_;
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	if (this->nAmountMatSource_)
	{
		for(int i = 0; i < nAmountMatSource_; ++i)
			if (this->MateriaSource_[i] != nullptr)
				delete this->MateriaSource_[i];
	}
}

void MateriaSource::learnMateria(AMateria *materia) {
		if (materia && this->nAmountMatSource_ < 4)
			this->MateriaSource_[nAmountMatSource_++] = materia;
		else if (materia)
		{
			for(int i = 0; i < 4; ++i)
			{
				if (this->MateriaSource_[i]->getType() == materia->getType())
					return;
			}
			for(int i = 0; i < 4; ++i)
				for(int j = i; j < 3; ++i)
					if (this->MateriaSource_[i] == this->MateriaSource_[j + 1])
					{
						this->MateriaSource_[i] = nullptr;
						this->MateriaSource_[i] = materia;
						return;
					}
			this->MateriaSource_[0] = nullptr;
			this->MateriaSource_[0] = materia;
		}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < this->nAmountMatSource_; ++i) {
		if(this->MateriaSource_[i]->getType() == type)
			return (this->MateriaSource_[i]->clone());
	}
	return nullptr;
}
