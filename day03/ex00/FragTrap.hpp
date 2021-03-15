//
// Created by Rinat Nurutdinow on 3/14/21.
//

#ifndef _FRAGTRAP_H
#define _FRAGTRAP_H

#include <iostream>
#include <string>

class FragTrap {
public:
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& copy_obj);
	~FragTrap();

	FragTrap& 		operator=(FragTrap const& obj_to_assign);
	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void 			beRepaired(unsigned int amount);
	void			vaulthunter_dot_exe(std::string const & target);
	int 			getHitPoints();
	int 			getEnergyPoints();
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


#endif //_FRAGTRAP_H
