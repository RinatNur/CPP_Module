//
// Created by Rinat Nurutdinow on 3/14/21.
//

#include "ClapTrap.hpp"
#include "../ex04/ClapTrap.hpp"


ClapTrap::ClapTrap() {
	std::cout << "****Default Clap constructor called*" << std::endl;
	this->_nHitPoints = 100;
	this->_nMaxHitPoints = 100;
	this->_nEnergyPoints = 100;
	this->_nMaxEnergyPoints = 100;
	this->_nLevel = 1;
	this->_szName = "default";
	this->_nMeleeAttackDamage = 30;
	this->_nRangedAttackDamage = 20;
	this->_nArmorDamageReduction = 5;
}

ClapTrap::ClapTrap(const std::string& szName) {
	std::cout << "*****Clap constructor called********" << std::endl;
	std::cout << "I'm " << szName << "! Ready to kill." << std::endl;
	this->_nHitPoints = 100;
	this->_nMaxHitPoints = 100;
	this->_nEnergyPoints = 100;
	this->_nMaxEnergyPoints = 100;
	this->_nLevel = 1;
	this->_szName = szName;
	this->_nMeleeAttackDamage = 30;
	this->_nRangedAttackDamage = 20;
	this->_nArmorDamageReduction = 5;
	std::cout << "************************************" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy_obj) {
	std::cout << "*****Clap copy constructor called***" << std::endl;
	operator=(copy_obj);
}

ClapTrap::~ClapTrap() {
	std::cout << "*****Clap destructor called*********" << std::endl;
	std::cout << "I see lightning in my chest, so I'm dying..." << std::endl;
	std::cout << "Rest in peace " << this->_szName << std::endl;
	std::cout << "************************************" << std::endl;

}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj_to_assign) {
	std::cout << "*****Clap assign operator called****" << std::endl;
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

void ClapTrap::rangedAttack(const std::string &target) {
	std::cout << "*****Ranged Attack called***********" << std::endl;
	std::cout << "FR4G-TP " << this->_szName << " attacks " << target
			  << " at range, causing " << this->_nRangedAttackDamage
			  << " points of damage!" << std::endl;
	std::cout << "************************************" << std::endl;

}

void ClapTrap::meleeAttack(const std::string &target) {
	std::cout << "*****Melee Attack called************" << std::endl;
	std::cout << "FR4G-TP " << this->_szName << " attacks " << target
			  << " at melee, causing " << this->_nMeleeAttackDamage
			  << " points of damage!" << std::endl;
	std::cout << "************************************" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "*****Take Damage called*************" << std::endl;
	if ((int)amount > this->_nHitPoints)
		std::cout << "The Hit Point less then damage amount!" << std::endl;
	else
	{
		std::cout << "I can't feel my fingers! Gah! I don't have any fingers!" << std::endl;
		this->_nHitPoints -= (int)amount - this->_nArmorDamageReduction;
		this->_nHitPoints = (this->_nHitPoints < 0) ? 0 : this->_nHitPoints;
	}
	std::cout << "************************************" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "*****Be Repaired called*************" << std::endl;
	if (this->_nHitPoints < 100) {
		std::cout << "Sweet life juice!" << std::endl;
		this->_nHitPoints += (int)amount;
		this->_nHitPoints = this->_nHitPoints > this->_nMaxHitPoints
							? this->_nMaxHitPoints : this->_nHitPoints;
	}
	else
		std::cout << "My hit point is full!" << std::endl;
	std::cout << "************************************" << std::endl;
}

int ClapTrap::getHitPoints() const{
	return _nHitPoints;
}

int ClapTrap::getEnergyPoints() const{
	return _nEnergyPoints;
}

std::string ClapTrap::getName() const {
	return this->_szName;
}
