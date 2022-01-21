#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


int main() {
	Bureaucrat rick("Rick", 100);
//	Bureaucrat rick("Rick", 1);

	PresidentialPardonForm formP("PRESIDENT");
	ShrubberyCreationForm formS("home");
	RobotomyRequestForm formR("ROBOT");

	try {
		std::cout << formP << std::endl;
//		rick.signForm(formP);
		rick.signForm(formS);
		rick.executeForm(formS);
//		rick.executeForm(formP);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}


	return (0);
}