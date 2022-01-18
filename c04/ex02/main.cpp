#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();
//	const Animal* a = new Animal();
	std::cout << "_______________________________________" << std::endl;

	std::cout << j->getType() << " " ;
	i->makeSound();

	std::cout << i->getType() << " ";
	i->makeSound();

	std::cout << "_______________________________________" << std::endl;

	((Cat*)j)->setIdea("Wow");
	((Cat*)i)->setIdea("Hello!");

	std::cout << ((Cat*)j)->getIdea() << std::endl;
	std::cout << ((Cat*)i)->getIdea() << std::endl;
	std::cout << "_______________________________________" << std::endl;

	const Animal* zoo[10];

	for (int i = 0; i < 4; i++) {
		if (i < 2)
			zoo[i] = new Cat();
		else
			zoo[i] = new Dog();
	}

	std::cout << "_______________________________________" << std::endl;
	delete j, delete i;
	std::cout << "_______________________________________" << std::endl;
	for (int i = 0; i < 4; i++) {
		delete zoo[i];
	}
}
