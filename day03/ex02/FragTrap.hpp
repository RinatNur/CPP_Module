//
// Created by Rinat Nurutdinow on 3/14/21.
//

#ifndef _FRAGTRAP_H
#define _FRAGTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:

	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& copy_obj);
	~FragTrap();

	FragTrap& 		operator=(FragTrap const& obj_to_assign);
	void			vaulthunter_dot_exe(std::string const & target);
};


#endif //_FRAGTRAP_H
