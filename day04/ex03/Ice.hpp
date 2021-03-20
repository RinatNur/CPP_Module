//
// Created by Rinat Nurutdinow on 3/20/21.
//

#ifndef DAY04_ICE_HPP
#define DAY04_ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria{
private:


public:
	Ice();
	Ice(const Ice& copy_obj);
	Ice& operator=(const Ice& obj_to_assign);
	virtual ~Ice();
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

};


#endif //DAY04_ICE_HPP
