//
// Created by Rinat Nurutdinow on 3/20/21.
//

#ifndef DAY04_CURE_HPP
#define DAY04_CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria{
private:

	std::string 	szName_;

public:
	Cure();
	Cure(const Cure& copy_obj);
	Cure& operator=(const Cure& obj_to_assign);
	virtual ~Cure();
	AMateria* clone() const;
	void use(ICharacter& target);

};


#endif //DAY04_CURE_HPP
