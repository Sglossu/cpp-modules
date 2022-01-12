#include "Zombie.hpp"

void Zombie::announce() {
	std::cout << name << " BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie() {
	name = "";
}

Zombie::~Zombie() {
	std::cout << name << " is dead\n";
}

Zombie::Zombie(std::string name) {
	this->name = name;
}

void Zombie::setName(const std::string &name) {
	Zombie::name = name;
}
