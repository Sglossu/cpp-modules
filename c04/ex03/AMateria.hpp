#pragma once
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria{
protected:
	std::string type;
public:
	AMateria();
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria(AMateria const &other);
	AMateria & operator=(AMateria const &other);

	virtual void use(ICharacter& target);
	virtual AMateria* clone() const = 0;
	const std::string &getType() const;
};
