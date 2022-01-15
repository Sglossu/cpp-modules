#include "DiamondTrap.hpp"

int main() {

	DiamondTrap rick("Rick");
	std::cout << "_____________________________________" << std::endl;

	std::cout << rick.getName() << std::endl;
	std::cout << rick.getHitpoints() << std::endl;
	std::cout << rick.getEnergyPoints() << std::endl;
	std::cout << rick.getAttackDamage() << std::endl;
//	DiamondTrap Morty(Rick);
//	std::cout << "_____________________________________" << std::endl;

//	Morty.setName("Morty");
//	std::cout << Morty.getName() << std::endl;
//
//	std::cout << "HitPoints of " << Rick.getName() << " " << Rick.getHitpoints() << std::endl;
//	std::cout << "Energy of " << Rick.getName() << " " << Rick.getEnergyPoints() << std::endl;
//	std::cout << "Damage of " << Rick.getName() << " " << Rick.getAttackDamage() << std::endl;
//	std::cout << "_____________________________________" << std::endl;
//
//	DiamondTrap Jarry("Jarry");
//	std::cout << "_____________________________________" << std::endl;
//
//	std::cout << "Name: " << Jarry.getName() << std::endl;
//	std::cout << "HP: " << Jarry.getHitpoints() << std::endl;
//	std::cout << "Energy: " << Jarry.getEnergyPoints() << std::endl;
//	std::cout << "Damage: " << Jarry.getAttackDamage() << std::endl;
//	std::cout << "_____________________________________" << std::endl;
//	std::cout << "_____________________________________" << std::endl;
//	Rick.whoAmI();
//	std::cout << "_____________________________________" << std::endl;
	return (0);
}