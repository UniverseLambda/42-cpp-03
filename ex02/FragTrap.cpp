#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	std::cout << name << " (FragTrap) has been constructed!" << std::endl;
	mHitpoints = 100;
	mEnergyPoints = 100;
	mAttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &cpy): ClapTrap(cpy) {
	std::cout << cpy.mName << " (FragTrap) has been copied!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << mName << " (FragTrap) has been destructed!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
	ClapTrap::operator=(rhs);

	std::cout << rhs.mName << " (FragTrap) has been copied by operator!" << std::endl;
	return *this;
}

void FragTrap::attack(const std::string &target) {
	if (mHitpoints == 0) {
		std::cout << mName << " (FragTrap) cannot attack " << target << " because its hit point count reached 0!" << std::endl;
	} else {
		--mHitpoints;
		std::cout << mName << " (FragTrap) attacked " << target << ", inflicting " << mAttackDamage << " points of damage!" << std::endl;
	}
}

void FragTrap::takeDamage(unsigned int amount) {
	if (mEnergyPoints == 0) {
		std::cout << mName << "(FragTrap) is already broken!" << std::endl;
		return;
	}

	if (amount > mEnergyPoints) {
		mEnergyPoints = 0;
	} else {
		mEnergyPoints -= amount;
	}

	if (mEnergyPoints == 0) {
		std::cout << mName << " (FragTrap) took " << amount << " points of damage and is now broken!" << std::endl;
	} else {
		std::cout << mName << " (FragTrap) took " << amount << " points of damage and is now at " << mEnergyPoints << " energy points!" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	mEnergyPoints += amount;
	std::cout << mName << " (FragTrap) has been repaired out of " << amount << " points of damage and is now at " << mEnergyPoints  << " energy points!" << std::endl;

}

void FragTrap::highFivesGuys(void) {
	std::cout << mName << " (FragTrap) *on radio*: hey guys, wanna high five tonight?" << std::endl;
}
