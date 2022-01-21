#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
	Bureaucrat rick("Rick", 2);
	Intern someRandomIntern;
	Form *form;

	try {
		form = someRandomIntern.makeForm("PresidentialPardonForm", "target");
		form->beSigned(rick);
		rick.executeForm(*form);
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	try {
		//		form = someRandomIntern.makeForm("ShrubberyCreationForm", "target");
		form = someRandomIntern.makeForm("Pupupu", "target");
		form->beSigned(rick);
		rick.executeForm(*form);
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	try {
		form = someRandomIntern.makeForm("ShrubberyCreationForm", "target");
//		form = someRandomIntern.makeForm("Pupupu", "target");
		form->beSigned(rick);
		rick.executeForm(*form);
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}



	delete form;
	return 0;
}