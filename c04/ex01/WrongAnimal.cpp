#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Notype") {
	std::cout << "Default constructor of WrongAnimal called (" << type << ")" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor of WrongAnimal called (" << type << ")" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "I'w WrongAnimal, not sound!" << std::endl;
}

const std::string &WrongAnimal::getType() const {
	return type;
}
