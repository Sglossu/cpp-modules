#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"



int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "_______________________________________" << std::endl;

	std::cout << j->getType() << " " ;
	i->makeSound();

	std::cout << i->getType() << " ";
	i->makeSound();

	std::cout << meta->getType() << " ";
	meta->makeSound();
	std::cout << "_______________________________________" << std::endl;

	const WrongAnimal*	w_meta = new WrongAnimal();
	const WrongCat*		w_j	= new WrongCat();

	std::cout << w_meta->getType() << " ";
	w_meta->makeSound();

	std::cout << w_j->getType() << " " ;
	w_j->makeSound();
	std::cout << "_______________________________________" << std::endl;

	delete j, delete i, delete meta, delete w_j, delete w_meta;
}
