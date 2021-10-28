#pragma once

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
private:

public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &cpy);

public:
	~FragTrap();

	FragTrap &operator=(const FragTrap &rhs);

	virtual void attack(const std::string &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	virtual void highFivesGuys(void);
};
