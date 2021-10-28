#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	std::cout << name << " (ScavTrap) has been constructed!" << std::endl;
	mHitpoints = 100;
	mEnergyPoints = 50;
	mAttackDamage = 20;
}

ScavTrap::ScavTrap(): ClapTrap("") {
	std::cout << mName << " (ScavTrap) has been constructed!" << std::endl;
	mEnergyPoints = 50;
}

ScavTrap::ScavTrap(const ScavTrap &cpy): ClapTrap(cpy) {
	std::cout << cpy.mName << " (ScavTrap) has been copied!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << mName << " (ScavTrap) has been destructed!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	ClapTrap::operator=(rhs);

	std::cout << rhs.mName << " (ScavTrap) has been copied by operator!" << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string &target) {
	if (mHitpoints == 0) {
		std::cout << mName << " (ScavTrap) cannot attack " << target << " because its hit point count reached 0!" << std::endl;
	} else {
		--mHitpoints;
		std::cout << mName << " (ScavTrap) attacked " << target << ", inflicting " << mAttackDamage << " points of damage!" << std::endl;
	}
}

void ScavTrap::takeDamage(unsigned int amount) {
	if (mEnergyPoints == 0) {
		std::cout << mName << "(ScavTrap) is already broken!" << std::endl;
		return;
	}

	if (amount > mEnergyPoints) {
		mEnergyPoints = 0;
	} else {
		mEnergyPoints -= amount;
	}

	if (mEnergyPoints == 0) {
		std::cout << mName << " (ScavTrap) took " << amount << " points of damage and is now broken!" << std::endl;
	} else {
		std::cout << mName << " (ScavTrap) took " << amount << " points of damage and is now at " << mEnergyPoints << " energy points!" << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount) {
	mEnergyPoints += amount;
	std::cout << mName << " (ScavTrap) has been repaired out of " << amount << " points of damage and is now at " << mEnergyPoints  << " energy points!"<< std::endl;

}

void ScavTrap::guardGuate() {
	std::cout << mName << " (ScavTrap) has entered in Gate keeper mode!"<< std::endl;
}
