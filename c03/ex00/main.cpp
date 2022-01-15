#include "ClapTrap.hpp"

int main() {
	ClapTrap	Rick("Rick");
	ClapTrap	Morty("Morty");
	std::cout << "______________________________________" << std::endl;

	Rick.attack("Morty");
	Rick.takeDamage(9);
	Rick.beRepaired(10);
	std::cout << "______________________________________" << std::endl;

	Morty.attack("Rick");
	Morty.takeDamage(13);
	Morty.beRepaired(7);
	std::cout << "______________________________________" << std::endl;

	return 0;
}
