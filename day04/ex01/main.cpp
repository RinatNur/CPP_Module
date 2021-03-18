//
// Created by Rinat Nurutdinow on 3/18/21.
//

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int 	main()
{
//	AWeapon		sword("sword", 40, 20);
	PlasmaRifle  pr;
	PowerFist    power;
	pr.attack();
	power.attack();
	return 0;
}