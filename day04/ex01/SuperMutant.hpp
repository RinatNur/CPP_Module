//
// Created by Rinat Nurutdinow on 3/18/21.
//

#ifndef DAY04_SUPERMUTANT_H
#define DAY04_SUPERMUTANT_H

#include "Enemy.hpp"

class SuperMutant : public Enemy{
public:
	SuperMutant();
	SuperMutant(const SuperMutant& copy_obj);
	SuperMutant&		operator=(const SuperMutant& objToAssign);
	virtual ~SuperMutant();

	void takeDamage(int);
};


#endif //DAY04_SUPERMUTANT_H
