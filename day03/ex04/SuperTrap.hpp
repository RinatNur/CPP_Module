//
// Created by Rinat Nurutdinow on 3/16/21.
//

#ifndef SUPERTRAP_H
#define SUPERTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : virtual public NinjaTrap, virtual public FragTrap  {
public:

	SuperTrap();
	SuperTrap(const std::string& name);
	SuperTrap(const SuperTrap& copy_obj);
	virtual ~SuperTrap();

	SuperTrap&		operator=(SuperTrap const& obj_to_assign);
	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
};


#endif //SUPERTRAP_H
