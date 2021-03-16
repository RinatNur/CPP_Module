//
// Created by Rinat Nurutdinow on 3/14/21.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	FragTrap	fragTrap("Snow");
	NinjaTrap	ninjaTrap("Fire");
	std::cout << "\nBe careful! Now we created the SuperTrap\n";
	SuperTrap	superTrap("Supersteel");
	srand(time(NULL));

	std::cout << "\n\n";

	std::cout << "Frag Trap" << std::endl;
	fragTrap.printAllFields();
	std::cout << "\n\n";
//
	std::cout << "Ninja Trap" << std::endl;
	ninjaTrap.printAllFields();
	std::cout << "\n\n";

	std::cout << "Super Trap" << std::endl;
	superTrap.printAllFields();
	std::cout << "\n*****SuperTrap Tests****************\n";
	superTrap.rangedAttack("SubZero");
	superTrap.meleeAttack("Goro");

	std::cout << "\n\n";


	return 0;
}