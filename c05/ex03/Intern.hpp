#pragma once
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:
	Intern();
	~Intern();
	Intern(Intern const & other);
	Intern & operator=(Intern const & other);

	Form*   makeForm(std::string form_name, std::string target);

	class UnknownFormName : public std::exception {
		virtual const char* what() const throw();
	};
};