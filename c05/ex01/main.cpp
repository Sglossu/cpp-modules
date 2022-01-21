#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Bureaucrat bob("Bob", 100);
//		Bureaucrat andy("Andy", 130);
		Form       f1("Form1", 120, 110);

		std::cout << bob << std::endl;
		std::cout << f1 << std::endl;
		f1.beSigned(bob);
//		f1.beSigned(andy);
//		std::cout << f1 << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}