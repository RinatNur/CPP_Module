//
// Created by Rinat Nurutdinow on 3/18/21.
//

#include "PowerFist.hpp"

PowerFist::PowerFist()
		: AWeapon("Power Fist", 8, 50) {
}

PowerFist::PowerFist(const PowerFist &copy_obj) : AWeapon(copy_obj){
	operator=(copy_obj);
}

PowerFist::~PowerFist() {

}

PowerFist &PowerFist::operator=(const PowerFist &objToAssign) {
	if (this != &objToAssign)
		AWeapon::operator=(objToAssign);
	return *this;
}

void PowerFist::attack() const{
	std::cout << "* pschhh... SBAM! *\n";
}