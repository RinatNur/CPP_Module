//
// Created by Rinat Nurutdinow on 3/2/21.
//

//#include <ctime>
#include <unistd.h>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

void ZombieEvent::setZombieType(const std::string& type) {
	_new_zombie_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name){
	Zombie*	newZombie = new Zombie(name, _new_zombie_type);
	return newZombie;
}
