#pragma once

#include <string>

class ClapTrap {
private:
	std::string mName;
	unsigned int mHitpoints;
	unsigned int mEnergyPoints;
	unsigned int mAttackDamage;

public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &cpy);
	virtual ~ClapTrap();

	ClapTrap &operator=(const ClapTrap &rhs);

	virtual void attack(const std::string &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
};
