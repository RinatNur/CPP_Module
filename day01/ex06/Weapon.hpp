//
// Created by Rinat Nurutdinow on 3/6/21.
//

#ifndef _WEAPON_H
#define _WEAPON_H

#include <string>

class Weapon {
public:
	Weapon(std::string str);

	void 			setType(const std::string &type);
	std::string 	getType();
	Weapon& operator=(Weapon const &copy);
private:
	std::string		_szType;
};


#endif //_WEAPON_H
