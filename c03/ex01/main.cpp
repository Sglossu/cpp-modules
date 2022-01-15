#include "ScavTrap.hpp"

int main() {
	ClapTrap	Rick("Rick");
	std::cout << "_______________________________" << std::endl;

	ClapTrap	Morty ("Morty");
	std::cout << "_______________________________" << std::endl;

	ScavTrap	Bat("Bat");
	std::cout << "_______________________________" << std::endl;

	Rick.attack("Morty");
	Rick.takeDamage(9);
	Rick.beRepaired(10);
	std::cout << "_______________________________" << std::endl;

	Morty.attack("Rick");
	Morty.takeDamage(9);
	Morty.beRepaired(7);
	std::cout << "_______________________________" << std::endl;

	Bat.attack("Rick");
	Bat.takeDamage(45);
	Bat.beRepaired(2);
	Bat.guardGate();
	std::cout << "_______________________________" << std::endl;

	return 0;
}
