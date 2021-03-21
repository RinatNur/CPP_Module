//
// Created by Rinat Nurutdinow on 3/20/21.
//

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &copy_obj) {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	operator=(copy_obj);
}

TacticalMarine & TacticalMarine::operator=(const TacticalMarine &obj_to_assign) {
	if(this != &obj_to_assign)
		return (*this);
	return (*this);
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine *TacticalMarine::clone()  const{
	return (new TacticalMarine);
}

void TacticalMarine::battleCry()  const{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack()  const{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack()  const{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
