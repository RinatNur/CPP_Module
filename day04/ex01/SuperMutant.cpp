//
// Created by Rinat Nurutdinow on 3/18/21.
//

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
		: Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::SuperMutant(const SuperMutant &copy_obj) : Enemy(copy_obj){
	operator=(copy_obj);
}

SuperMutant &SuperMutant::operator=(const SuperMutant &objToAssign) {
	if (this != &objToAssign)
		Enemy::operator=(objToAssign);
	return *this;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh...\n";
}

void SuperMutant::takeDamage(int value) {
	Enemy::takeDamage(value - 3);
}
