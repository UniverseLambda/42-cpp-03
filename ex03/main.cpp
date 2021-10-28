#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

void testFragTrap() {
	std::cout << "============================== FRAG TRAP TESTS ==============================" << std::endl;

	FragTrap ct("Chock Nurris");
	FragTrap ct2(ct);

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

	ct = FragTrap("Chick Norrus");

	ct.takeDamage(10);
	ct.beRepaired(10);
	ct.takeDamage(20);
	ct.beRepaired(200);

	ct.attack("Breece Lu");
	ct.attack("John Cena");

	ct2.attack("Chick Norrus");

	ct.highFivesGuys();
	ct2.highFivesGuys();
}

void testDiamondTrap() {
	std::cout << "============================== DIAMOND TRAP TESTS ==============================" << std::endl;

	DiamondTrap ct("Chock Nurris");
	DiamondTrap ct2(ct);

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

	ct = DiamondTrap("Chick Norrus");

	ct.takeDamage(10);
	ct.beRepaired(10);
	ct.takeDamage(20);
	ct.beRepaired(200);

	ct.attack("Breece Lu");
	ct.attack("John Cena");

	ct2.attack("Chick Norrus");

	ct.highFivesGuys();
	ct.guardGuate();
	ct2.highFivesGuys();
	ct2.guardGuate();

	ct.whoAmI();
	ct2.whoAmI();
}

int main(void) {
	testClapTrap();
	testScavTrap();
	testFragTrap();
	testDiamondTrap();
	return 0;
}
