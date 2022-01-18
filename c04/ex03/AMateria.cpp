#include "AMateria.hpp"

AMateria::AMateria() : type("Empty") {}

AMateria::AMateria(const std::string &type) : type(type) {}

AMateria::AMateria(const AMateria &other) {
	*this = other;
}

AMateria::~AMateria() {
	this->type.clear();
}

AMateria &AMateria::operator=(const AMateria &other) {
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

const std::string &AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter &target) {
	std::cout << "* uses some materia at " << target.getName() << " *\n";
}


