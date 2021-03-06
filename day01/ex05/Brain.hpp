//
// Created by Rinat Nurutdinow on 3/4/21.
//

#ifndef DAY01_BRAIN_H
#define DAY01_BRAIN_H

#include <string>

class Brain {
public:
	Brain();
	std::string identify() const;
private:
	int 	nIq;
	int 	nWeight;
};


#endif //DAY01_BRAIN_H
