//
// Created by Rinat Nurutdinow on 3/14/21.
//

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : NinjaTrap(), FragTrap() {
	std::cout << "***Default Super constructor called*" << std::endl;
	this->_nHitPoints = FragTrap::_nHitPoints;
	this->_nMaxHitPoints = FragTrap::_nMaxHitPoints;
	this->_nEnergyPoints = NinjaTrap::_nEnergyPoints;
	this->_nMaxEnergyPoints = NinjaTrap::_nMaxEnergyPoints;
	this->_nMeleeAttackDamage = NinjaTrap::_nMeleeAttackDamage;
	this->_nRangedAttackDamage = FragTrap::_nRangedAttackDamage;
	this->_nArmorDamageReduction = FragTrap::_nArmorDamageReduction;
}

SuperTrap::SuperTrap(const std::string& szName) : NinjaTrap(szName), FragTrap(szName) {
	std::cout << "*****Super constructor called*******" << std::endl;
	std::cout << "I'm " << szName << "! Ready to kill." << std::endl;
	this->_szName = szName;
	this->_nHitPoints = FragTrap::_nHitPoints;
	this->_nMaxHitPoints = FragTrap::_nMaxHitPoints;
	this->_nEnergyPoints = NinjaTrap::_nEnergyPoints;
	this->_nMaxEnergyPoints = NinjaTrap::_nMaxEnergyPoints;
	this->_nMeleeAttackDamage = NinjaTrap::_nMeleeAttackDamage;
	this->_nRangedAttackDamage = FragTrap::_nRangedAttackDamage;
	this->_nArmorDamageReduction = FragTrap::_nArmorDamageReduction;
	std::cout << "************************************" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& copy_obj) {
	std::cout << "*****Super copy constructor called**" << std::endl;
	operator=(copy_obj);
}

SuperTrap::~SuperTrap() {
	std::cout << "*****Super destructor called********" << std::endl;
	std::cout << "I see lightning in my chest, so I'm dying..." << std::endl;
	std::cout << "Rest in peace " << this->_szName << std::endl;
	std::cout << "************************************" << std::endl;

}

SuperTrap &SuperTrap::operator=(const SuperTrap &obj_to_assign) {
	std::cout << "*****Super assign operator called***" << std::endl;
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

void SuperTrap::rangedAttack(const std::string &target) {
	std::cout << "*****Range Frag Attack**************" << std::endl;
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target) {
	std::cout << "*****Melee Ninja Attack**************" << std::endl;
	NinjaTrap::meleeAttack(target);
}


