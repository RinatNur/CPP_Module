//
// Created by Rinat Nurutdinow on 3/2/21.
//

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void randomChump(int name_len) {
	std::string 	random_name;
	const char	alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	random_name.reserve(name_len);
	srand(time(NULL));
	for (int i = 0; i < name_len; ++i)
		random_name += alphabet[rand() % (sizeof(alphabet) - 1)];
	random_name[0] = toupper(random_name[0]);

	std::string 	zombie_types_arr[] = {"magic", "voodoo", "doom", "wolfstein", "midnight"};
	std::string 	random_type;
	random_type += zombie_types_arr[rand() % (zombie_types_arr->size() - 1)];
	Zombie		random_zombie(random_name, random_type);
	random_zombie.announce();
}

int 	main(void)
{
	ZombieEvent		first_z;
	first_z.setZombieType("vampir");
	Zombie*			zombie1 = first_z.newZombie("Gleb");
	zombie1->announce();
	delete zombie1;
	std::cout << std::endl;

	randomChump(7);
	std::cout << std::endl;

	Zombie*			zombie2 = new Zombie("Navalniy", "voodoo");
	zombie2->announce();
	delete zombie2;
	std::cout << std::endl;

	std::cout << "End of the program!" << std::endl;
	return 0;
}

