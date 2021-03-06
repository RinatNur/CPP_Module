//
// Created by Rinat Nurutdinow on 3/4/21.
//

#ifndef _HUMAN_H
#define _HUMAN_H

#include "Brain.hpp"

class Human {
public:
	const Brain& getBrain() const;
	std::string  identify() const;
private:
	const Brain		_head;
};


#endif //_HUMAN_H
