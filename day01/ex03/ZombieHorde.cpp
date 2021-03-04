//
// Created by Rinat Nurutdinow on 3/2/21.
//

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _num_of_zombies(N) {
	_zombies_army = new Zombie[_num_of_zombies];
	std::string 	zombie_names_arr[] = {"Snow", "Fire", "Water", "Blood", "Shark"};
	srand(time(NULL));
	for (int i = 0; i < _num_of_zombies; ++i)
		_zombies_army[i].setZombie(zombie_names_arr[rand() % 5], "vampir");
}

ZombieHorde::~ZombieHorde() {
	delete [] _zombies_army;
}

void ZombieHorde::announce() {
	for (int i = 0; i < _num_of_zombies; ++i)
		_zombies_army[i].announce();
}
