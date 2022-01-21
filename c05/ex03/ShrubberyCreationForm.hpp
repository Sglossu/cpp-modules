#pragma once
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	std::string target;
public:
	 ShrubberyCreationForm(const std::string target);
	 ShrubberyCreationForm(const  ShrubberyCreationForm& scf);
	 ShrubberyCreationForm &operator=(const  ShrubberyCreationForm& scf);
	 ~ShrubberyCreationForm();

	const std::string &getTarget() const;
	void execute(Bureaucrat const & executor) const;
};
