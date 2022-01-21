#pragma once
#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter {
protected:
	AMateria*	inventory[4];
	std::string	name;
	Character();
public:
	Character(std::string name);
	~Character();
	Character(Character const &other);
	Character & operator=(Character const &other);

	const std::string &getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

};
