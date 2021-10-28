#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(std::string name):
	mName(name),
	mHitpoints(10),
	mEnergyPoints(10),
	mAttackDamage(0) {
	std::cout << name << " (ClapTrap) has been constructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy):
	mName(cpy.mName),
	mHitpoints(cpy.mHitpoints),
	mEnergyPoints(cpy.mEnergyPoints),
	mAttackDamage(cpy.mAttackDamage) {
	std::cout << cpy.mName << " (ClapTrap) has been copied!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << mName << " (ClapTrap) has been destructed!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	mName = rhs.mName;
	mHitpoints = rhs.mHitpoints;
	mEnergyPoints = rhs.mEnergyPoints;
	mAttackDamage = rhs.mAttackDamage;

	std::cout << rhs.mName << " (ClapTrap) has been copied by operator!" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if (mHitpoints == 0) {
		std::cout << mName << " (ClapTrap) cannot attack " << target << " because its hit point count reached 0!" << std::endl;
	} else {
		--mHitpoints;
		std::cout << mName << " (ClapTrap) attacked " << target << ", inflicting " << mAttackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (mEnergyPoints == 0) {
		std::cout << mName << "(ClapTrap) is already broken!" << std::endl;
		return;
	}

	if (amount > mEnergyPoints) {
		mEnergyPoints = 0;
	} else {
		mEnergyPoints -= amount;
	}

	if (mEnergyPoints == 0) {
		std::cout << mName << " (ClapTrap) took " << amount << " points of damage and is now broken!" << std::endl;
	} else {
		std::cout << mName << " (ClapTrap) took " << amount << " points of damage and is now at " << mEnergyPoints << " energy points!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	mEnergyPoints += amount;
	std::cout << mName << " (ClapTrap) has been repaired out of " << amount << " points of damage and is now at " << mEnergyPoints  << " energy points!"<< std::endl;

}
