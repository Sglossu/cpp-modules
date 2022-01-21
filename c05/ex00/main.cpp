#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat Bob("Bob", 149);
		Bureaucrat Den("Den", 5);
		Bureaucrat Frank("Frank", 148);

		std::cout << Bob << std::endl;
		std::cout << Den << std::endl;
		std::cout << Frank << std::endl;
		Bob.decrement();
//		std::cout << Bob << std::endl;
	}
	catch (std::exception &ex) {
		std::cout << ex.what();
		std::cout << " Can't change grade." << std::endl;
	}
	return (0);
}
