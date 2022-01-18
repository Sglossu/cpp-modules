#pragma once
#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice();
	Ice(Ice const &other);
	Ice & operator=(Ice const &other);
	~Ice();

	virtual void use(ICharacter& target);
	virtual AMateria* clone() const;
};
