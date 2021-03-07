//
// Created by Rinat Nurutdinow on 3/6/21.
//

#ifndef _WEAPON_H
#define _WEAPON_H

#include <string>

class Weapon {
private:
	std::string		&szType;

public:
	Weapon(std::string str);
	//Weapon(const Weapon &copy);
	void 			setType(const std::string &type);
	std::string 	getType();
	Weapon &operator=(const Weapon &copy);
};


#endif //_WEAPON_H
