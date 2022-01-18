#include "Animal.hpp"

Animal::Animal() : type("Notype") {
	std::cout << "Default constructor of Animal called (" << type << ")" << std::endl;
}

Animal::Animal(const std::string name) : type(name) {
	std::cout << "Default constructor of Animal called (" << type << ")" << std::endl;
}

Animal::Animal(const Animal &other) {
	type = other.type;
	std::cout << "Copy constructor of Animal called (" << type << ")" << std::endl;
}

Animal &Animal::operator=(Animal const &other) {
	type = other.type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Destructor of Animal called (" << type << ")" << std::endl;
}

const std::string &Animal::getType() const {
	return type;
}
