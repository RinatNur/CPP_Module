//
// Created by Rinat Nurutdinow on 3/18/21.
//

#ifndef AWEAPON_H
#define AWEAPON_H

#include <iostream>
#include <string>

class AWeapon {
private:

	std::string 	szName_;
	int 			nApCost_;
	int 			nDamage_;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon& copy_obj);
	AWeapon& operator=(const AWeapon& objToAssign);
	virtual ~AWeapon();

	std::string virtual	getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;

};


#endif //AWEAPON_H
