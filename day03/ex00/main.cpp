//
// Created by Rinat Nurutdinow on 3/14/21.
//

#include "FragTrap.hpp"

int main()
{
	FragTrap	fragTrap("Ninja");

	fragTrap.rangedAttack("Goblin");

	fragTrap.meleeAttack("Vampir");

	std::cout << "\nHit Points before attack = " << fragTrap.getHitPoints() << "\n";
	fragTrap.takeDamage(30);
	std::cout << "Hit Points after attack  = " << fragTrap.getHitPoints() << "\n\n";
	//second takeDamage test
//	std::cout << "\nHit Points before attack = " << fragTrap.getHitPoints() << "\n";
//	fragTrap.takeDamage(90);
//	std::cout << "Hit Points after attack  = " << fragTrap.getHitPoints() << "\n\n";

	std::cout << "\nHit Points before repairing = " << fragTrap.getHitPoints() << "\n";
	fragTrap.beRepaired(15);
	std::cout << "Hit Points after repairing = " << fragTrap.getHitPoints() << "\n\n";
	//second beRepaired test
//	std::cout << "\nHit Points before repairing = " << fragTrap.getHitPoints() << "\n";
//	fragTrap.beRepaired(25);
//	std::cout << "Hit Points after repairing = " << fragTrap.getHitPoints() << "\n\n";

	std::cout << "\nEnergy Points before attack = " << fragTrap.getEnergyPoints() << "\n";
	fragTrap.vaulthunter_dot_exe("Goro");
	std::cout << "Energy Points after attack = " << fragTrap.getEnergyPoints() << "\n\n";
	//second vaulthunter attack
//	std::cout << "\nEnergy Points before attack = " << fragTrap.getEnergyPoints() << "\n";
//	fragTrap.vaulthunter_dot_exe("Goro");
//	std::cout << "Energy Points after attack = " << fragTrap.getEnergyPoints() << "\n\n";
	return 0;
}