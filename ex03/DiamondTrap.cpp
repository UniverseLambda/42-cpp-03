#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap(std::string name):
	ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap() {
	mName = name;
	std::cout << mName << " (DiamondTrap) constructed!" << std::endl;
	mHitpoints = FragTrap::mHitpoints;
	mEnergyPoints = ScavTrap::mEnergyPoints;
	mAttackDamage = FragTrap::mAttackDamage;
	std::cout << "##############################################################" << std::endl;
	std::cout << "mName: " << mName << std::endl;
	std::cout << "mHitpoints: " << mHitpoints << std::endl;
	std::cout << "mEnergyPoints: " << mEnergyPoints << std::endl;
	std::cout << "mAttackDamage: " << mAttackDamage << std::endl;
	std::cout << "##############################################################" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy):
	ClapTrap(cpy), FragTrap(cpy), ScavTrap(cpy) {
	mName = cpy.mName;
	std::cout << mName << " (DiamondTrap) has been copied!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << mName << " (DiamondTrap) has been destructed!" << std::endl;
}


DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
	ClapTrap::operator=(rhs);
	FragTrap::operator=(rhs);
	ScavTrap::operator=(rhs);
	mName = rhs.mName;

	return *this;
}

void DiamondTrap::attack(const std::string &name) {
	ScavTrap::attack(name);
}

void DiamondTrap::takeDamage(unsigned int amount) {
	if (mEnergyPoints == 0) {
		std::cout << mName << "(DiamondTrap) is already broken!" << std::endl;
		return;
	}

	if (amount > mEnergyPoints) {
		mEnergyPoints = 0;
	} else {
		mEnergyPoints -= amount;
	}

	if (mEnergyPoints == 0) {
		std::cout << mName << " (DiamondTrap) took " << amount << " points of damage and is now broken!" << std::endl;
	} else {
		std::cout << mName << " (DiamondTrap) took " << amount << " points of damage and is now at " << mEnergyPoints << " energy points!" << std::endl;
	}
}

void DiamondTrap::beRepaired(unsigned int amount) {
	mEnergyPoints += amount;
	std::cout << mName << " (DiamondTrap) has been repaired out of " << amount << " points of damage and is now at " << mEnergyPoints  << " energy points!"<< std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "People call me " << ClapTrap::mName << ", but you can call me " << mName << std::endl;
}
