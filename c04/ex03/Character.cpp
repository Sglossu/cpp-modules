#include "Character.hpp"

Character::Character() {
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
}

Character::Character(std::string name) : name(name) {
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
}

Character::~Character() {
	for (int i = 0; i < 4; ++i)
		delete inventory[i];
}

Character::Character(const Character &other) {
	name = other.name;
	for (int i = 0; i < 4; ++i)
		inventory[i] = other.inventory[i]->clone();
}

Character &Character::operator=(const Character &other) {
	if (this == &other)
		return (*this);
	for (int i = 0; i < 4; ++i) {
		if (this->inventory[i])
			delete this->inventory[i];
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
	}
	return (*this);
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (inventory[i] == m) {
			std::cout << name << " already has " << m->getType() << std::endl;
			return ;
		}
	}
	for (int i = 0; i < 4; ++i) {
		if (!inventory[i]) {
			inventory[i] = m;
			std::cout << name << " has taken " << m->getType() << std::endl;
			return ;
		}
	}
}

void Character::unequip(int idx) {
	if (inventory[idx])
		inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (inventory[idx])
		inventory[idx]->use(target);
}

const std::string &Character::getName() const {
	return name;
}






















