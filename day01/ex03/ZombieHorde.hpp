//
// Created by Rinat Nurutdinow on 3/2/21.
//

#ifndef _ZOMBIEHORDE_HPP
#define _ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {
public:
	ZombieHorde(int N);
	~ZombieHorde();

	void		announce();
private:
	Zombie*		_zombies_army;
	int			_num_of_zombies;
};


#endif //_ZOMBIEHORDE_HPP
