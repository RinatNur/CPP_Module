#include <iostream>
#include <sstream>
#include <fstream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "Humanb.hpp"

int 	main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
//		Weapon club = Weapon("crude spiked club");
//		HumanB jim("Jim", Weapon(__1::basic_string()));
//		jim.setWeapon(club);
//		jim.attack();
//		club.setType("some other type of club");
//		jim.attack();
	}
}