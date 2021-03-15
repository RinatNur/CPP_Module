//
// Created by Rinat Nurutdinow on 3/15/21.
//

#ifndef _SCAVTRAP_H
#define _SCAVTRAP_H

#include <string>
#include <iostream>

class ScavTrap {
public:
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& copy_obj);
	~ScavTrap();

	int 			getHitPoints();
	int 			getEnergyPoints();
	ScavTrap& 		operator=(ScavTrap const& obj_to_assign);
	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void 			beRepaired(unsigned int amount);
	void 			challengeNewcomer();
private:

	std::string		_szName;
	int 			_nHitPoints;
	int 			_nMaxHitPoints;
	int 			_nEnergyPoints;
	int 			_nMaxEnergyPoints;
	int 			_nLevel;
	int 			_nMeleeAttackDamage;
	int 			_nRangedAttackDamage;
	int 			_nArmorDamageReduction;

};


#endif //_SCAVTRAP_H
