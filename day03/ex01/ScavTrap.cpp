//
// Created by Rinat Nurutdinow on 3/14/21.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "****Default Scav constructor called*" << std::endl;
	this->_nHitPoints = 100;
	this->_nMaxHitPoints = 100;
	this->_nEnergyPoints = 50;
	this->_nMaxEnergyPoints = 50;
	this->_nLevel = 1;
	this->_szName = "default";
	this->_nMeleeAttackDamage = 20;
	this->_nRangedAttackDamage = 15;
	this->_nArmorDamageReduction = 3;
}

ScavTrap::ScavTrap(const std::string& szName) {
	std::cout << "*****Scav constructor called********" << std::endl;
	std::cout << szName << " born to war!" << std::endl;
	this->_nHitPoints = 100;
	this->_nMaxHitPoints = 100;
	this->_nEnergyPoints = 50;
	this->_nMaxEnergyPoints = 50;
	this->_nLevel = 1;
	this->_szName = szName;
	this->_nMeleeAttackDamage = 20;
	this->_nRangedAttackDamage = 15;
	this->_nArmorDamageReduction = 3;
	std::cout << "************************************" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy_obj) {
	std::cout << "*****Scav copy constructor called***" << std::endl;
	operator=(copy_obj);
}

ScavTrap::~ScavTrap() {
	std::cout << "*****Scav destructor called*********" << std::endl;
	std::cout << "I can see... the code" << std::endl;
	std::cout << "Rest in peace " << this->_szName << std::endl;
	std::cout << "************************************" << std::endl;

}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj_to_assign) {
	std::cout << "*****Scav assign operator called****" << std::endl;
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

int ScavTrap::getHitPoints() {
	return _nHitPoints;
}

int ScavTrap::getEnergyPoints() {
	return _nEnergyPoints;
}

void ScavTrap::rangedAttack(const std::string &target) {
	std::cout << "*****Ranged Attack called***********" << std::endl;
	std::cout << "FR4G-TP " << this->_szName << " attacks " << target
			  << " at range, causing " << this->_nRangedAttackDamage
			  << " points of damage!" << std::endl;
	std::cout << "************************************" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target) {
	std::cout << "*****Melee Attack called************" << std::endl;
	std::cout << "FR4G-TP " << this->_szName << " attacks " << target
			  << " at melee, causing " << this->_nMeleeAttackDamage
			  << " points of damage!" << std::endl;
	std::cout << "************************************" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "*****Take Damage called*************" << std::endl;
	if (amount > this->_nHitPoints)
		std::cout << "The Hit Point less then damage amount!" << std::endl;
	else
	{
		std::cout << "Why do I even feel pain?!" << std::endl;
		this->_nHitPoints -= (int)amount - this->_nArmorDamageReduction;
		this->_nHitPoints = (this->_nHitPoints < 0) ? 0 : this->_nHitPoints;
	}
	std::cout << "************************************" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "*****Be Repaired called*************" << std::endl;
	if (this->_nHitPoints < 100) {
		std::cout << "Health over here!" << std::endl;
		this->_nHitPoints += (int)amount;
		this->_nHitPoints = this->_nHitPoints > this->_nMaxHitPoints
							? this->_nMaxHitPoints : this->_nHitPoints;
	}
	else
		std::cout << "My hit point is full!" << std::endl;
	std::cout << "************************************" << std::endl;
}

void ScavTrap::challengeNewcomer() {
	std::cout << "*****Challenge func called**********" << std::endl;
	std::string 	challenge[5] = {
			"Eat bomb, baddie! Can you?",
			"Stop me before I kill again! Time started",
			"Can you catch a bullet with your teeth in 3 tries?",
			"Right PRINTF in ten minutes with floats",
			"Make capybaras great again"
	};
	std::cout << challenge[rand() % 5] << std::endl;
	std::cout << "************************************" << std::endl;
}
