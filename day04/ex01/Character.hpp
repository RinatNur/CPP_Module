//
// Created by Rinat Nurutdinow on 3/18/21.
//

#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"


class Character {
private:

	std::string 	szName_;
	int 			nAp_;
	const int		nMaxAp_;
	AWeapon* 		Weapon_;

public:
	Character(std::string const & name);
	Character(const Character& copy_obj);
	Character&		operator=(const Character& objToAssign);
	virtual ~Character();

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	AWeapon*	getWeapon() const;
	std::string getWeaponName() const;
	int 		getAp() const;
	std::string virtual getName() const;
};

std::ostream& operator<<(std::ostream& o, const Character &obj);

#endif //CHARACTER_H
