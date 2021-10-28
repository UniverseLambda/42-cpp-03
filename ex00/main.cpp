#include "ClapTrap.hpp"

int main(void) {
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
	return 0;
}
