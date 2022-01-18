#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i)
		delete inventory[i];
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	for (int i = 0; i < 4; ++i)
		inventory[i] = other.inventory[i]->clone();
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	if (this == &other)
		return (*this);
	for (int i = 0; i < 4; ++i)
		inventory[i] = other.inventory[i]->clone();
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (!inventory[i]) {
			inventory[i] = m;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	if (type == "ice" || type == "cure") {
		for (int i = 0; i < 4; ++i) {
			if (inventory[i] && inventory[i]->getType() == type)
				return (inventory[i]->clone());
		}
	}
	return 0;
}