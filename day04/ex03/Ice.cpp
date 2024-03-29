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
	AMateria::operator=(obj_to_assign);
	return *this;
}

Ice::~Ice() {}

AMateria *Ice::clone() const {
	return (new Ice);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
