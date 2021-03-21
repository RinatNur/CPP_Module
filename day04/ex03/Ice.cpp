//
// Created by Rinat Nurutdinow on 3/20/21.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"), szName_("ice"){
}

Ice::Ice(const Ice &copy_obj) : AMateria("ice"), szName_(copy_obj.szName_){
	operator=(copy_obj);
}

Ice &Ice::operator=(const Ice &obj_to_assign) {
	if (this != &obj_to_assign)
		this->szName_ = obj_to_assign.szName_;
	return *this;
}

Ice::~Ice() {

}

AMateria *Ice::clone() const {
	return (new Ice);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << this->szName_ << " *" << std::endl;
	AMateria::use(target);
}
