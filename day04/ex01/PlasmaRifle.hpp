//
// Created by Rinat Nurutdinow on 3/18/21.
//

#ifndef DAY04_PLASMARIFLE_H
#define DAY04_PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle& copy_obj);
	PlasmaRifle&		operator=(const PlasmaRifle& objToAssign);
	virtual ~PlasmaRifle();

	void 				attack() const;

};


#endif //DAY04_PLASMARIFLE_H
