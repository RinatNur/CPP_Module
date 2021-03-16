//
// Created by Rinat Nurutdinow on 3/14/21.
//

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap() {
	std::cout << "***Default Ninja constructor called*" << std::endl;
	this->_nHitPoints = 60;
	this->_nMaxHitPoints = 60;
	this->_nEnergyPoints = 120;
	this->_nMaxEnergyPoints = 120;
	this->_nMeleeAttackDamage = 60;
	this->_nRangedAttackDamage = 5;
	this->_nArmorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(const std::string& szName) : ClapTrap(szName){
	std::cout << "*****Ninja constructor called*******" << std::endl;
	std::cout << szName << " born to war!" << std::endl;
	this->_nHitPoints = 60;
	this->_nMaxHitPoints = 60;
	this->_nEnergyPoints = 120;
	this->_nMaxEnergyPoints = 120;
	this->_nMeleeAttackDamage = 60;
	this->_nRangedAttackDamage = 5;
	this->_nArmorDamageReduction = 0;
	std::cout << "************************************" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& copy_obj) {
	std::cout << "*****Ninja copy constructor called**" << std::endl;
	operator=(copy_obj);
}

NinjaTrap::~NinjaTrap() {
	std::cout << "*****Ninja destructor called********" << std::endl;
	std::cout << "I can see... the code" << std::endl;
	std::cout << "Rest in peace " << this->_szName << std::endl;
	std::cout << "************************************" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &obj_to_assign) {
	std::cout << "*****Ninja assign operator called***" << std::endl;
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

void NinjaTrap::ninjaShoebox(ClapTrap &clapTrap) {
	std::cout << "*****ClapTrap in action*************" << std::endl;
	std::cout << "My name is " << clapTrap.getName() << ". Don't play with me!" << std::endl;
	std::cout << "Freeze! I don't know why I said that." << std::endl;
	std::cout << "************************************" << std::endl;

}

void NinjaTrap::ninjaShoebox(FragTrap &fragTrap) {
	std::cout << "*****FragTrap in action*************" << std::endl;
	fragTrap.vaulthunter_dot_exe("Scorpions");

}

void NinjaTrap::ninjaShoebox(ScavTrap &scavTrap) {
	std::cout << "*****ScavTrap in action************" << std::endl;
	scavTrap.challengeNewcomer();
}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninjaTrap) {
	std::cout << "*****NinjaTrap in action************" << std::endl;
	std::cout << "My name is " << ninjaTrap.getName() << ". Don't play with me!" << std::endl;
	std::cout << "Solid! Get it? As in... frozen?" << std::endl;
	std::cout << "************************************" << std::endl;
}
