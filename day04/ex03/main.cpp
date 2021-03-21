//
// Created by Rinat Nurutdinow on 3/20/21.
//

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Fire.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	//tests from subject
	std::cout << "tests from subject\n";
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	//check equip and unequip in ICharacter
	std::cout << "\n\ncheck equip and unequip in ICharacter\n";
	ICharacter* he = new Character("he");
	AMateria*	materia1 = new Ice();
	AMateria*	materia2 = new Cure();
	AMateria*	materia3 = new Cure();
	AMateria*	materia4 = new Ice();
	he->equip(materia1);
	he->equip(materia2);
	he->equip(materia3);
	he->equip(materia4);
	he->use(0, *he);
	he->use(1, *he);
	he->use(2, *he);
	he->use(3, *he);
	std::cout << "\nUnequip material under index 1\n";
	he->unequip(1);
	he->use(0, *he);
	he->use(1, *he);
	he->use(2, *he);
	std::cout << "\nUnequip material under index 0, 2\n";
	he->unequip(0);
	he->unequip(1);
	he->use(0, *he);
	he->unequip(0);
	he->use(0, *he);
	delete he;
	delete materia1;
	delete materia2;
	delete materia3;
	delete materia4;

	//check IMaterialSource
	std::cout << "\n\ncheck IMaterialSource\n";
	IMateriaSource*		MS = new MateriaSource();
	AMateria*	materia5 = new Ice();
	AMateria*	materia6 = new Cure();
	AMateria*	materia7 = new Cure();
	AMateria*	materia8 = new Cure();
	AMateria*	materia9 = new Fire();
	MS->learnMateria(materia5);
	MS->learnMateria(materia6);
	MS->learnMateria(materia7);
	MS->learnMateria(materia8);
	MS->learnMateria(materia9);
	AMateria*	tmp1;
	std::string type = "ice";
	tmp1 = MS->createMateria(type);
	if (tmp1)
		std:: cout << "Type \"" << tmp1->getType() << "\" is in Source.\n";
	else
		std:: cout << "Type \"" << type << "\" is not founded.\n";
	delete MS;
	delete tmp1;
//	delete materia5;
	delete materia6;
//	delete materia7;
//	delete materia8;
//	delete materia9;

	return 0;
}