//
// Created by Rinat Nurutdinow on 3/14/21.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	FragTrap	fragTrap("Snow");
	ScavTrap	scavTrap("Eagle");
	ClapTrap	clapTrap("Stone");
	NinjaTrap	ninjaTrap("Fire");
	srand(time(NULL));

	std::cout << "\n\n";
	ninjaTrap.ninjaShoebox(clapTrap);
	ninjaTrap.ninjaShoebox(fragTrap);
	ninjaTrap.ninjaShoebox(scavTrap);
	ninjaTrap.ninjaShoebox(ninjaTrap);
	std::cout << "\n\n";


	return 0;
}