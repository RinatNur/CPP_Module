//
// Created by Rinat Nurutdinow on 3/20/21.
//

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) {
	this->_xp = 0;
}

AMateria::AMateria(const AMateria &copy_obj) {
	operator=(copy_obj);
}

AMateria &AMateria::operator=(const AMateria &obj_to_assign) {
	this->_xp = obj_to_assign._xp;
	return *this;
}

AMateria::~AMateria() {

}

std::string const &AMateria::getType() const {
	return ;
}

unsigned int AMateria::getXP() const {
	return this->_xp;
}



void AMateria::use(ICharacter &target) {
	this->_xp += 10;
}
