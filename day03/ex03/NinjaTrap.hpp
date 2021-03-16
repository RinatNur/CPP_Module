//
// Created by Rinat Nurutdinow on 3/16/21.
//

#ifndef NinjaTrap_H
#define NinjaTrap_H

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
public:
	NinjaTrap();
	NinjaTrap(const std::string& name);
	NinjaTrap(const NinjaTrap& copy_obj);
	~NinjaTrap();

	NinjaTrap&		operator=(NinjaTrap const& obj_to_assign);
	void 			ninjaShoebox(ClapTrap& clapTrap);
	void 			ninjaShoebox(FragTrap& fragTrap);
	void 			ninjaShoebox(ScavTrap& scavTrap);
	void 			ninjaShoebox(NinjaTrap& ninjaTrap);
};


#endif //NinjaTrap_H
