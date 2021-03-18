//
// Created by Rinat Nurutdinow on 3/17/21.
//

#ifndef DAY03_PEON_H
#define DAY03_PEON_H

#include "Victim.hpp"

class Peon : public Victim{
public:
	Peon(const std::string& szName);
	Peon(const Peon& copy_obj);
	virtual ~Peon();

	Peon&		operator=(const Peon& objToAssign);
	void 		getPolymorphed() const;
};


#endif //DAY03_PEON_H
