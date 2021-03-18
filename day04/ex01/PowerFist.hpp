//
// Created by Rinat Nurutdinow on 3/18/21.
//

#ifndef POWERFIST_H
#define POWERFIST_H

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
	PowerFist();
	PowerFist(const PowerFist& copy_obj);
	virtual ~PowerFist();

	PowerFist&		operator=(const PowerFist& objToAssign);
	void 				attack() const;

};


#endif //POWERFIST_H
