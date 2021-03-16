//
// Created by Rinat Nurutdinow on 3/15/21.
//

#ifndef _SCAVTRAP_H
#define _SCAVTRAP_H

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& copy_obj);
	~ScavTrap();

	ScavTrap&		operator=(ScavTrap const& obj_to_assign);
	void 			challengeNewcomer();
};


#endif //_SCAVTRAP_H
