//
// Created by Rinat Nurutdinow on 3/18/21.
//

#include <unistd.h>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "SuperMutant.hpp"

int 	main()
{
	// example in subject
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	//some more tests
	Enemy*	terminator = new SuperMutant();
	me->attack(terminator);
	std::cout << "Enemy's HP = " << terminator->getHP() << std::endl;

	me->attack(terminator);
	std::cout << *me;
	std::cout << "Enemy's HP = " << terminator->getHP() << std::endl;

	me->attack(terminator);
	std::cout << *me;
	std::cout << "Enemy's HP = " << terminator->getHP() << std::endl;

	me->attack(terminator);
	std::cout << "Enemy's HP = " << terminator->getHP() << std::endl;
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;

	delete me;
	delete pr;
	delete pf;
	delete terminator;
//	Enemy b is not dead, it must be deleted by line under
//	delete b;
	return 0;
}