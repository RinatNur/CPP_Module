//
// Created by Rinat Nurutdinow on 3/20/21.
//

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &copy_obj) {
	std::cout << "* teleports from space *" << std::endl;
	operator=(copy_obj);
}

AssaultTerminator & AssaultTerminator::operator=(const AssaultTerminator &obj_to_assign) {
	if (this != &obj_to_assign)
		*this = obj_to_assign;
	return (*this);
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back..." << std::endl;

}

ISpaceMarine *AssaultTerminator::clone() const {
	return (new AssaultTerminator);
}

void AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;

}

void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;

}
