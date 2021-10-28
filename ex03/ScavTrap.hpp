#pragma once

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
private:

public:
	ScavTrap(std::string name);

protected:
	ScavTrap();

public:
	ScavTrap(const ScavTrap &cpy);
	virtual ~ScavTrap();

	ScavTrap &operator=(const ScavTrap &rhs);

	virtual void attack(const std::string &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	virtual void guardGuate();
};
