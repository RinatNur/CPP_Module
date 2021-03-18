//
// Created by Rinat Nurutdinow on 3/18/21.
//

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
			: AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy_obj) : AWeapon(copy_obj){
	operator=(copy_obj);
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &objToAssign) {
	if (this != &objToAssign)
		AWeapon::operator=(objToAssign);
	return *this;
}

PlasmaRifle::~PlasmaRifle() {

}

void PlasmaRifle::attack() const{
	std::cout << "* piouuu piouuu piouuu *\n";
}
