#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Default constructor of Cat called (" << type << ")" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << "Copy constructor of Cat called (" << type << ")" << std::endl;
}

Cat &Cat::operator=(Cat const &other) {
	type = other.type;
	return (*this);
}

Cat::~Cat() {
	std::cout << "Destructor of Cat called (" << type << ")" << std::endl;
}

const std::string &Cat::getType() const {
	return type;
}

void Cat::makeSound() const {
	std::cout << type << " said meoooooooowwwwww!" << std::endl;
}