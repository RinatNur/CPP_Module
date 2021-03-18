//
// Created by Rinat Nurutdinow on 3/17/21.
//

#ifndef DAY03_SORCERER_H
#define DAY03_SORCERER_H

#include <iostream>
#include <string>
#include <ostream>
#include "Victim.hpp"


class Sorcerer {
public:
	Sorcerer(std::string szName, std::string szTitle);
	Sorcerer(const Sorcerer& copy_obj);
	virtual ~Sorcerer();

	Sorcerer&				operator=(const Sorcerer& objToAssign);
	void			salutation() const;
	std::string 	getName() const;
	std::string 	getTitle() const;
	void			polymorph(Victim const & obj);
private:
	std::string 	szName_;
	std::string 	szTitle_;
};

std::ostream&		operator<<(std::ostream& o, const Sorcerer& obj);

#endif //DAY03_SORCERER_H
