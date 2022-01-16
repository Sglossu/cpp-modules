#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	type = "Cat";
	std::cout << "Default constructor of WrongCat called (" << type << ")" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Destructor of WrongCat called (" << type << ")" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "I'w WrongCat, wrrrrrong meeeeeeooooow!" << std::endl;
}

const std::string &WrongCat::getType() const {
	return type;
}
