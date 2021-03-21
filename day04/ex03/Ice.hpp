//
// Created by Rinat Nurutdinow on 3/20/21.
//

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria{
private:

	std::string 	szName_;

public:
	Ice();
	Ice(const Ice& copy_obj);
	Ice& operator=(const Ice& obj_to_assign);
	virtual ~Ice();
	AMateria* clone() const;
	void use(ICharacter& target);

};


#endif //ICE_HPP
