//
// Created by Rinat Nurutdinow on 3/20/21.
//

#ifndef TACTICALMARINE_H
#define TACTICALMARINE_H

#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine& copy_obj);
	TacticalMarine& operator=(const TacticalMarine& obj_to_assign);
	virtual ~TacticalMarine();

	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;

};


#endif //TACTICALMARINE_H
