//
// Created by Rinat Nurutdinow on 3/18/21.
//

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
		: Enemy(80, "RadScorpion") {
	std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(const RadScorpion &copy_obj) : Enemy(copy_obj){
	operator=(copy_obj);
}

RadScorpion &RadScorpion::operator=(const RadScorpion &objToAssign) {
	if (this != &objToAssign)
		Enemy::operator=(objToAssign);
	return *this;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *\n";
}

void RadScorpion::takeDamage(int value) {
	Enemy::takeDamage(value);
//	if(this->getHP() <= 0)
//		this->~RadScorpion();
}