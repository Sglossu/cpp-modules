#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Default constructor of Dog called (" << type << ")" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << "Copy constructor of Dog called (" << type << ")" << std::endl;
}

Dog &Dog::operator=(Dog const &other) {
	type = other.type;
	return (*this);
}

Dog::~Dog() {
	std::cout << "Destructor of Dog called (" << type << ")" << std::endl;
}

const std::string &Dog::getType() const {
	return type;
}

void Dog::makeSound() const {
	std::cout << type << " said woof woof!" << std::endl;
}