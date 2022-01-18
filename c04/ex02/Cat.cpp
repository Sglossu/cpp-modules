#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	this->brain = new Brain();
	std::cout << "Default constructor of Cat called (" << type << ")" << std::endl;
}

Cat::Cat(const Cat &other) {
	this->type = other.type;
	brain = new Brain(*other.brain);
	std::cout << "Copy constructor of Cat called (" << type << ")" << std::endl;
}

Cat &Cat::operator=(Cat const &other) {
	if (this == & other)
		return (*this);
	if (this->brain)
		delete this->brain;
	this->brain = new Brain();
	this->brain = other.brain;
	type = other.type;
	return (*this);
}

Cat::~Cat() {
	delete brain;
	std::cout << "Destructor of Cat called (" << type << ")" << std::endl;
}

const std::string &Cat::getType() const {
	return type;
}

void Cat::makeSound() const {
	std::cout << type << " said meoooooooowwwwww!" << std::endl;
}

void Cat::setIdea(std::string idea) {
	this->brain->setIdea(idea);
}

std::string Cat::getIdea() const {
	return this->brain->getIdea();
}