//
// Created by Rinat Nurutdinow on 3/14/21.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	FragTrap	fragTrap("Snow");
	ScavTrap	scavTrap("Eagle");
	ScavTrap	scavTrap_test(scavTrap);
	ClapTrap	clapTrap("Stone");
	srand(time(NULL));

	scavTrap.rangedAttack("LuKang");

	fragTrap.meleeAttack("SubZero");

	clapTrap.meleeAttack("Sonya");

	std::cout << "\nHit Points before attack = " << scavTrap.getHitPoints() << "\n";
	scavTrap.takeDamage(30);
	std::cout << "Hit Points after attack  = " << scavTrap.getHitPoints() << "\n\n";

	std::cout << "\nHit Points before attack = " << scavTrap.getHitPoints() << "\n";
	fragTrap.takeDamage(90);
	std::cout << "Hit Points after attack  = " << scavTrap.getHitPoints() << "\n\n";

	std::cout << "\nHit Points before attack = " << scavTrap.getHitPoints() << "\n";
	clapTrap.takeDamage(90);
	std::cout << "Hit Points after attack  = " << scavTrap.getHitPoints() << "\n\n";

//	std::cout << "\nHit Points before repairing = " << scavTrap.getHitPoints() << "\n";
//	scavTrap.beRepaired(15);
//	std::cout << "Hit Points after repairing = " << scavTrap.getHitPoints() << "\n\n";
	//second beRepaired test
//	std::cout << "\nHit Points before repairing = " << scavTrap.getHitPoints() << "\n";
//	scavTrap.beRepaired(25);
//	std::cout << "Hit Points after repairing = " << scavTrap.getHitPoints() << "\n\n";

	scavTrap.challengeNewcomer();

	fragTrap.vaulthunter_dot_exe("Goro");

	return 0;
}