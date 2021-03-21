//
// Created by Rinat Nurutdinow on 3/21/21.
//

#include "Fire.hpp"

Fire::Fire() : AMateria("fire"), szName_("fire"){
}

Fire::Fire(const Fire &copy_obj) : AMateria("fire"), szName_(copy_obj.szName_){
	operator=(copy_obj);
}

Fire &Fire::operator=(const Fire &obj_to_assign) {
	if (this != &obj_to_assign)
		this->szName_ = obj_to_assign.szName_;
	return *this;
}

Fire::~Fire() {}

AMateria *Fire::clone() const {
	return (new Fire);
}

void Fire::use(ICharacter &target) {
	std::cout << "* shoots an Fire bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
