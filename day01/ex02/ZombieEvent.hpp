//
// Created by Rinat Nurutdinow on 3/2/21.
//

#ifndef _ZOMBIEEVENT_H
#define _ZOMBIEEVENT_H

#include <string>
#include "Zombie.hpp"

class ZombieEvent{
public:
	Zombie*			newZombie(std::string name);
	void			setZombieType(const std::string& type);
private:
	std::string		_new_zombie_type;
};
#endif //_ZOMBIEEVENT_H
