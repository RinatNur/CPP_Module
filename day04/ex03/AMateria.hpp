//
// Created by Rinat Nurutdinow on 3/20/21.
//

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria {
private:

	std::string				_szType;
	unsigned int			_xp;

public:

	AMateria(std::string const & type);
	AMateria(const AMateria& copy_obj);
	AMateria& operator=(const AMateria& obj_to_assign);
	virtual ~AMateria();

	std::string const&		getType() const; //Returns the materia type
	unsigned int			getXP() const; //Returns the Materia's XP
	virtual AMateria*		clone() const = 0;
	virtual void			use(ICharacter& target);

};


#endif //AMATERIA_HPP
