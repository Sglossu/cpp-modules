#include "DiamondTrap.hpp"

int main() {

	DiamondTrap rick("Rick");
	std::cout << "_____________________________________" << std::endl;

	DiamondTrap morty("Morty");
	std::cout << "_____________________________________" << std::endl;

	std::cout << "HitPoints of " << rick.getName() << " " << rick.getHitpoints() << std::endl;
	std::cout << "Energy of " << rick.getName() << " " << rick.getEnergyPoints() << std::endl;
	std::cout << "Damage of " << rick.getName() << " " << rick.getAttackDamage() << std::endl;
	std::cout << "_____________________________________" << std::endl;

	DiamondTrap jarry("Jarry");
	std::cout << "_____________________________________" << std::endl;

	std::cout << "Name: " << jarry.getName() << std::endl;
	std::cout << "HP: " << jarry.getHitpoints() << std::endl;
	std::cout << "Energy: " << jarry.getEnergyPoints() << std::endl;
	std::cout << "Damage: " << jarry.getAttackDamage() << std::endl;
	jarry.whoAmI();
	std::cout << "_____________________________________" << std::endl;
	return (0);
}