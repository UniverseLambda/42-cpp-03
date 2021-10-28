#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

void testClapTrap() {
	std::cout << "============================== CLAP TRAP TESTS ==============================" << std::endl;

	ClapTrap ct("Chock Nurris");
	ClapTrap ct2(ct);

	ct.attack("Breece Lu");
	ct.attack("Breece Lu");
	ct.attack("Breece Lu");
	ct.attack("Breece Lu");
	ct.attack("Breece Lu");
	ct.attack("John Cena");
	ct.attack("Breece Lu");
	ct.attack("Breece Lu");
	ct.attack("Breece Lu");
	ct.attack("Breece Lu");
	ct.attack("Breece Lu");

	ct.takeDamage(10);
	ct.beRepaired(10);
	ct.takeDamage(20);
	ct.beRepaired(200);

	ct.attack("Breece Lu");
	ct.attack("John Cena");

	ct = ClapTrap("Chick Norrus");

	ct.takeDamage(10);
	ct.beRepaired(10);
	ct.takeDamage(20);
	ct.beRepaired(200);

	ct.attack("Breece Lu");
	ct.attack("John Cena");

	ct2.attack("Chick Norrus");

}

void testScavTrap() {
	std::cout << "============================== SCAV TRAP TESTS ==============================" << std::endl;

	ScavTrap ct("Chock Nurris");
	ScavTrap ct2(ct);

	ct.attack("Breece Lu");
	ct.attack("Breece Lu");
	ct.attack("Breece Lu");
	ct.attack("Breece Lu");
	ct.attack("Breece Lu");
	ct.attack("John Cena");
	ct.attack("Breece Lu");
	ct.attack("Breece Lu");
	ct.attack("Breece Lu");
	ct.attack("Breece Lu");
	ct.attack("Breece Lu");

	ct.takeDamage(10);
	ct.beRepaired(10);
	ct.takeDamage(20);
	ct.beRepaired(200);

	ct.attack("Breece Lu");
	ct.attack("John Cena");

	ct = ScavTrap("Chick Norrus");

	ct.takeDamage(10);
	ct.beRepaired(10);
	ct.takeDamage(20);
	ct.beRepaired(200);

	ct.attack("Breece Lu");
	ct.attack("John Cena");

	ct2.attack("Chick Norrus");

	ct.guardGuate();
	ct2.guardGuate();
}

int main(void) {
	testClapTrap();
	testScavTrap();
	return 0;
}
