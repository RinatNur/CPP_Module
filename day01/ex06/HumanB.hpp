//
// Created by Rinat Nurutdinow on 3/6/21.
//

#ifndef _HUMANB_H
#define _HUMANB_H


#include <iostream>
#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string name);

	void 	attack();
private:
	Weapon*		szType;
	std::string szName;

};


#endif //_HUMANB_H
