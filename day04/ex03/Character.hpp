//
// Created by Rinat Nurutdinow on 3/20/21.
//

#ifndef DAY04_CHARACTER_HPP
#define DAY04_CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Character : public ICharacter{
private:
	AMateria*		MateriaArr_[4];
	int 			nAmmountMateria_;
	std::string 	szName_;
public:
	Character(const std::string&);
	Character(const Character& copy_obj);
	Character& operator=(const Character& obj_to_assign);
	virtual ~Character();
	std::string const & getName() const;
	void equip(AMateria * m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif //DAY04_CHARACTER_HPP
