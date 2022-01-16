#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default constructor of Brain called (" << type << ")" << std::endl;
}

Brain::Brain(const Brain &other) : Brain(other) {
	
	std::cout << "Copy constructor of Brain called (" << type << ")" << std::endl;
}

Brain &Brain::operator=(Brain const &other) {
	type = other.type;
	return (*this);
}

Brain::~Brain() {
	std::cout << "Destructor of Cat called (" << type << ")" << std::endl;
}
