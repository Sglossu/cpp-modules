#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &other) {
	*this = other;
}

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &other) {
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

AMateria *Cure::clone() const {
	Cure *tmp = new Cure();
	*tmp = *this;
	return (tmp);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}