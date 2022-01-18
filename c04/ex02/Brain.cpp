#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default constructor of Brain called" << std::endl;
}

Brain::Brain(const Brain &other) {
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = other.ideas[i];
	std::cout << "Copy constructor of Brain called" << std::endl;
}

Brain &Brain::operator=(Brain const &other) {
	if (this == &other)
		return (*this);
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain() {
	std::cout << "Destructor of Brain called" << std::endl;
}

void Brain::setIdea(std::string idea) {
	this->ideas[0] = idea;
}

std::string Brain::getIdea() const {
	return (this->ideas[0]);
}

