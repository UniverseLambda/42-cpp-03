#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
private:
	std::string mName;

public:
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &cpy);
	virtual ~DiamondTrap();

	DiamondTrap &operator=(const DiamondTrap &rhs);
	virtual void attack(const std::string &name);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);

	void whoAmI();
};

