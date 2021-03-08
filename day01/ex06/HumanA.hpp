//
// Created by Rinat Nurutdinow on 3/6/21.
//

#ifndef _HUMANA_H
#define _HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {
public:
	HumanA(const std::string &name, Weapon &szType);

	void 	attack();
private:
	Weapon&		_WeaponA;
	std::string _szName;

};

#endif //_HUMANA_H
