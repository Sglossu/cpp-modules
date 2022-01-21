#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
protected:
	AMateria	*inventory[4];
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const &other);
	MateriaSource & operator=(MateriaSource const &other);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};
