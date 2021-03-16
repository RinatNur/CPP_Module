//
// Created by Rinat Nurutdinow on 3/15/21.
//

#ifndef _CLAPTRAP_H
#define _CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap {
public:

	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& copy_obj);
	virtual ~ClapTrap();

	ClapTrap& 			operator=(ClapTrap const& obj_to_assign);
	virtual void		rangedAttack(std::string const & target);
	virtual void		meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void 				beRepaired(unsigned int amount);
	int 				getHitPoints() const;
	std::string 		getName() const;
	int 				getEnergyPoints() const;
	void 				printAllFields() const;

protected:

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


#endif //_CLAPTRAP_H
