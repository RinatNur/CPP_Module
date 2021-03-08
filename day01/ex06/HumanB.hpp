//
// Created by Rinat Nurutdinow on 3/6/21.
//

#ifndef _HUMANB_H
#define _HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {
public:
	HumanB(const std::string& name);

	void setWeapon(Weapon& type) ;
	void 	attack();
private:
	Weapon*		_WeaponB;
	std::string _szName;

};

#endif //_HUMANB_H
