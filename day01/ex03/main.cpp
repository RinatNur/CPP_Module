//
// Created by Rinat Nurutdinow on 3/2/21.
//

#include <iostream>
#include "ZombieHorde.hpp"

void 	create_horde()
{
	ZombieHorde		west_horde(5);
	std::cout << std::endl << "West horde!!! Roll call:" << std::endl;
	west_horde.announce();

	std::cout << "Nooooooo... We've fallen into a trap. We'll be back" << std::endl << std::endl;
}

int 	main(void)
{
	create_horde();

	return 0;
}