#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
private:

public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &cpy);
	~FragTrap();

	FragTrap &operator=(const FragTrap &rhs);

	virtual void attack(const std::string &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void highFivesGuys(void);
};
