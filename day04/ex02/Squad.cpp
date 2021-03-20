//
// Created by Rinat Nurutdinow on 3/20/21.
//

#include "Squad.hpp"

Squad::Squad() : nCountUnits_(0){
      this->SpMaArray_ = nullptr;
}

Squad::Squad(const Squad &copy_obj) : nCountUnits_(0), SpMaArray_(nullptr){
	operator=(copy_obj);
}

Squad &Squad::operator=(const Squad &obj_to_assign) {
	if (this != &obj_to_assign && obj_to_assign.getCount())
	{
		for (int i = 0; i < this->nCountUnits_; ++i)
			delete this->SpMaArray_[i];
		delete this->SpMaArray_;

		this->SpMaArray_ = new ISpaceMarine*[obj_to_assign.nCountUnits_];
		for (int i = 0; i < obj_to_assign.nCountUnits_; ++i)
			this->SpMaArray_[i] = obj_to_assign.SpMaArray_[i]->clone();
		this->nCountUnits_ = obj_to_assign.nCountUnits_;
	}
	return *this;
}

Squad::~Squad() {
	if (this->nCountUnits_)
	{
		for (int i = 0; i < this->nCountUnits_; ++i)
			delete this->SpMaArray_[i];
		delete this->SpMaArray_;
	}
}

int Squad::getCount() const {
	return this->nCountUnits_;
}

ISpaceMarine *Squad::getUnit(int index) const {
	return SpMaArray_[index];
}

int Squad::push(ISpaceMarine * sm) {
	ISpaceMarine	**tmp = new ISpaceMarine*[nCountUnits_ + 1];
	for (int i = 0; i < this->nCountUnits_; i++)
		tmp[i] = this->SpMaArray_[i];
	tmp[this->nCountUnits_++] = sm;
	if (nCountUnits_ > 1)
		delete this->SpMaArray_;
	this->SpMaArray_ = tmp;
	return this->nCountUnits_;
}
