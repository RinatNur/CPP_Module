//
// Created by Rinat Nurutdinow on 3/20/21.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"), szName_("cure"){
}

Cure::Cure(const Cure &copy_obj) : AMateria("cure"), szName_(copy_obj.szName_){
	operator=(copy_obj);
}

Cure &Cure::operator=(const Cure &obj_to_assign) {
	if (this != &obj_to_assign)
		this->szName_ = obj_to_assign.szName_;
	return *this;
}

Cure::~Cure() {}

AMateria *Cure::clone() const {
	return (new Cure);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}
