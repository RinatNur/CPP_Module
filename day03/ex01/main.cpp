//
// Created by Rinat Nurutdinow on 3/14/21.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	srand(time(NULL));
	ScavTrap	scavTrap("Scorpions");

	scavTrap.rangedAttack("LuKang");

	scavTrap.meleeAttack("SubZero");

	std::cout << "\nHit Points before attack = " << scavTrap.getHitPoints() << "\n";
	scavTrap.takeDamage(30);
	std::cout << "Hit Points after attack  = " << scavTrap.getHitPoints() << "\n\n";
	//second takeDamage test
//	std::cout << "\nHit Points before attack = " << scavTrap.getHitPoints() << "\n";
//	scavTrap.takeDamage(90);
//	std::cout << "Hit Points after attack  = " << scavTrap.getHitPoints() << "\n\n";

	std::cout << "\nHit Points before repairing = " << scavTrap.getHitPoints() << "\n";
	scavTrap.beRepaired(15);
	std::cout << "Hit Points after repairing = " << scavTrap.getHitPoints() << "\n\n";
	//second beRepaired test
//	std::cout << "\nHit Points before repairing = " << scavTrap.getHitPoints() << "\n";
//	scavTrap.beRepaired(25);
//	std::cout << "Hit Points after repairing = " << scavTrap.getHitPoints() << "\n\n";

	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	return 0;
}