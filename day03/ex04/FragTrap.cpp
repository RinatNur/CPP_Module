//
// Created by Rinat Nurutdinow on 3/14/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "****Default Frag constructor called*" << std::endl;
	this->_nHitPoints = 100;
	this->_nMaxHitPoints = 100;
	this->_nRangedAttackDamage = 20;
	this->_nArmorDamageReduction = 5;
}

FragTrap::FragTrap(const std::string& szName) : ClapTrap(szName) {
	std::cout << "*****Frag constructor called********" << std::endl;
	std::cout << "I'm " << szName << "! Ready to kill." << std::endl;
	std::cout << "************************************" << std::endl;
	this->_nHitPoints = 100;
	this->_nMaxHitPoints = 100;
	this->_nRangedAttackDamage = 20;
	this->_nArmorDamageReduction = 5;
}

FragTrap::FragTrap(const FragTrap& copy_obj) {
	std::cout << "*****Frag copy constructor called***" << std::endl;
	operator=(copy_obj);
}

FragTrap::~FragTrap() {
	std::cout << "*****Frag destructor called*********" << std::endl;
	std::cout << "I see lightning in my chest, so I'm dying..." << std::endl;
	std::cout << "Rest in peace " << this->_szName << std::endl;
	std::cout << "************************************" << std::endl;

}

FragTrap &FragTrap::operator=(const FragTrap &obj_to_assign) {
	std::cout << "*****Frag assign operator called****" << std::endl;
	if (this != &obj_to_assign) {
		this->_nHitPoints = obj_to_assign._nHitPoints;
		this->_nMaxHitPoints =  obj_to_assign._nMaxHitPoints;
		this->_nEnergyPoints =  obj_to_assign._nEnergyPoints;
		this->_nMaxEnergyPoints =  obj_to_assign._nMaxEnergyPoints;
		this->_nLevel =  obj_to_assign._nLevel;
		this->_szName =  obj_to_assign._szName;
		this->_nMeleeAttackDamage =  obj_to_assign._nMeleeAttackDamage;
		this->_nRangedAttackDamage =  obj_to_assign._nRangedAttackDamage;
		this->_nArmorDamageReduction =  obj_to_assign._nArmorDamageReduction;
	}
	std::cout << "************************************" << std::endl;

	return *this;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
	std::cout << "*****Vaulthunter called*************" << std::endl;
	std::string 	attack[5] = {
			"This time it'll be awesome, I promise!",
			"Hey everybody, check out my package!",
			"Let's get this party started!",
			"Push this button, flip this dongle, voila! Help me!",
			"F to the R to the 4 to the G to the WHAAT!"
	};
	if (this->_nEnergyPoints < 25)
		std::cout << "Oooops not enough energy to this attack " << std::endl;
	else
	{
		std::cout << attack[(rand() % 5)] << " " << target << " i'm coming" <<std::endl;
		this->_nEnergyPoints -= 25;
	}
	std::cout << "************************************" << std::endl;
}
