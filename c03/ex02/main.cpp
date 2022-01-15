#include "FragTrap.hpp"

int main() {
	ClapTrap	Rick("Rick");

	ClapTrap	Morty = Rick;
	Morty.setName("Morty");
	ScavTrap	Bat("Bat");
	FragTrap	Summer("Summer");
	FragTrap	Jarry("Jarry");

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

	Summer.attack("Bat");
	Summer.takeDamage(78);
	Summer.beRepaired(5);
	Summer.highFivesGuys();

	Jarry.highFivesGuys();

	return 0;
}
