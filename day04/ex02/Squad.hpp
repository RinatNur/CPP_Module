//
// Created by Rinat Nurutdinow on 3/20/21.
//

#ifndef SQUAD_H
#define SQUAD_H

#include <iostream>
#include <string>
#include "ISquad.hpp"
#include "TacticalMarine.hpp"

class Squad : public ISquad{
private:

	int 			nCountUnits_;
	ISpaceMarine**   SpMaArray_;

public:
	Squad();
	Squad(const Squad& copy_obj);
	Squad& operator=(const Squad& obj_to_assign);
	virtual ~Squad();

	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine*);
};


#endif //SQUAD_H
