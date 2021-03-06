//
// Created by Rinat Nurutdinow on 3/4/21.
//

#ifndef DAY01_HUMAN_H
#define DAY01_HUMAN_H

#include "Brain.hpp"

class Human {
public:
	Human();
	~Human();

	const Brain& getBrain();
	std::string  identify();
private:
	const Brain		_head;
};


#endif //DAY01_HUMAN_H
