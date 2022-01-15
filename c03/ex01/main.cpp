#include "ScavTrap.hpp"

int main() {
	ClapTrap	Rick("Rick");

	ClapTrap	Morty = Rick;
	Morty.setName("Morty");
	ScavTrap	Bat("Bat");

	Rick.attack("Morty");
	Rick.takeDamage(9);
	Rick.beRepaired(10);

	std::cout << Rick.getHitpoints() << std::endl;

	Morty.attack("Rick");
	Morty.takeDamage(9);
	Morty.beRepaired(7);

	std::cout << Morty.getHitpoints() << std::endl;

	Bat.attack("Rick");
	Bat.takeDamage(45);
	Bat.beRepaired(2);
	Bat.guardGate();

	std::cout << Bat.getHitpoints() << std::endl;

	return 0;
}
