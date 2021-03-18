//
// Created by Rinat Nurutdinow on 3/17/21.
//

#include "Victim.hpp"
#include "Peon.hpp"
#include "Sorcerer.hpp"

int 	main()
{
	//tests from subject
//	Sorcerer robert("Robert", "the Magnificent");
//	Victim jim("Jimmy");
//	Peon joe("Joe");
//	std::cout << robert << jim << joe;
//	robert.polymorph(jim);
//	robert.polymorph(joe);


	Sorcerer		sorcerer("Sahhar", "Magistr");
	Victim			victim1("Rat");
	Victim			victim("Rat");
	Victim			victim_test(victim);
	Peon			peon("Bird");
	Peon			peon_test("mouse");
	std::cout << "----------------------------------------------\n";

	// assign victim to peon;
//	victim = peon;
//	victim.salutation();
//	victim.getPolymorphed();


	peon = peon_test;
	peon.salutation();
	std::cout << "----------------------------------------------\n";

//
//
//
//	sorcerer.salutation();
//	std::cout << sorcerer << std::endl;
//
//	sorcerer.polymorph(victim);
//	sorcerer.polymorph(peon);
//
//	victim.salutation();
//	std::cout << victim << std::endl;
	return 0;
}