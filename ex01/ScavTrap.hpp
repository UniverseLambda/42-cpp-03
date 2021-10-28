#pragma once

#include "ClapTrap.hpp"

class ScavTrap: ClapTrap {
private:

public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &cpy);
	virtual ~ScavTrap();

	ScavTrap &operator=(const ScavTrap &rhs);

	virtual void attack(const std::string &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	virtual void guardGuate();
};
