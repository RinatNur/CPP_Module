//
// Created by Rinat Nurutdinow on 3/4/21.
//

#ifndef _BRAIN_H
#define _BRAIN_H

#include <string>

class Brain {
public:
	Brain();

	std::string identify() const;
private:
	int 	nIq;
	int 	nWeight;
};


#endif //_BRAIN_H
