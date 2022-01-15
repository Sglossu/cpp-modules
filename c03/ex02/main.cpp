#include "FragTrap.hpp"

int main() {
	ClapTrap	Rick("Rick");
	ClapTrap	Morty("Morty");
	std::cout << "_________________________________" << std::endl;
	ScavTrap	Bat("Bat");
	std::cout << "_________________________________" << std::endl;
	FragTrap	Summer("Summer");
	FragTrap	Jarry("Jarry");
	std::cout << "_________________________________" << std::endl;

	Rick.attack("Morty");
	Rick.takeDamage(9);
	Rick.beRepaired(10);
	std::cout << "_________________________________" << std::endl;

	Morty.attack("Rick");
	Morty.takeDamage(9);
	Morty.beRepaired(7);
	std::cout << "_________________________________" << std::endl;

	Bat.attack("Rick");
	Bat.takeDamage(45);
	Bat.beRepaired(2);
	Bat.guardGate();
	std::cout << "_________________________________" << std::endl;

	Summer.attack("Bat");
	Summer.takeDamage(78);
	Summer.beRepaired(5);
	Summer.highFivesGuys();
	Jarry.highFivesGuys();
	std::cout << "_________________________________" << std::endl;

	return 0;
}
