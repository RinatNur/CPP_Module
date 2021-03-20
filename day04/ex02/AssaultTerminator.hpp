//
// Created by Rinat Nurutdinow on 3/20/21.
//

#ifndef ASSAULTTERMINATOR_H
#define ASSAULTTERMINATOR_H

#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator& copy_obj);
	AssaultTerminator& operator=(const AssaultTerminator& obj_to_assign);
	virtual ~AssaultTerminator();

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

};


#endif //ASSAULTTERMINATOR_H
