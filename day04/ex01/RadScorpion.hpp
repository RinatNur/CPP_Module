//
// Created by Rinat Nurutdinow on 3/18/21.
//

#ifndef DAY04_RADSCORPION_H
#define DAY04_RADSCORPION_H

#include "Enemy.hpp"

class RadScorpion : Enemy{
public:
	RadScorpion();
	RadScorpion(const RadScorpion& copy_obj);
	RadScorpion&		operator=(const RadScorpion& objToAssign);
	virtual ~RadScorpion();

	void takeDamage(int);
};


#endif //DAY04_RADSCORPION_H
