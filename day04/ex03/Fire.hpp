//
// Created by Rinat Nurutdinow on 3/21/21.
//

#ifndef FIRE_H
#define FIRE_H

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Fire : public AMateria{
private:

	std::string 	szName_;

public:
	Fire();
	Fire(const Fire& copy_obj);
	Fire& operator=(const Fire& obj_to_assign);
	virtual ~Fire();
	AMateria*		clone() const;
	void			use(ICharacter& target);

};


#endif //FIRE_H
