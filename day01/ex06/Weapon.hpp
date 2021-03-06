//
// Created by Rinat Nurutdinow on 3/6/21.
//

#ifndef _WEAPON_H
#define _WEAPON_H

#include <string>

class Weapon {
public:
	Weapon(std::string str);
	void 			setType(std::string type);
	std::string 	getType();
private:
	std::string		szType;
};


#endif //_WEAPON_H
