#include "ClapTrap.hpp"

int main() {
	ClapTrap	Rick("Rick");
	ClapTrap	Morty("Morty");

	Rick.attack("Morty");
	Rick.takeDamage(9);
	Rick.beRepaired(10);

	std::cout << Rick.getHitpoints() << std::endl;

	Morty.attack("Rick");
	Morty.takeDamage(13);
	Morty.beRepaired(7);

	std::cout << Morty.getHitpoints() << std::endl;

	return 0;
}
