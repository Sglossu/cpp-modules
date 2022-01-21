#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &other) {
	*this = other;
}

Intern &Intern::operator=(const Intern &other) {
	(void) other;
	return (*this);
}

const char *Intern::UnknownFormName::what() const throw() {
	return (" unknown form name!");
}

Form *Intern::makeForm(std::string form_name, std::string target) {
	Form *forms[3] = {
			new ShrubberyCreationForm(target),
			new RobotomyRequestForm(target),
			new PresidentialPardonForm(target)
	};
	std::string form_names_arr[3] = {
			"ShrubberyCreationForm",
			"RobotomyRequestForm",
			"PresidentialPardonForm"
	};

	for (int i = 0; i < 3; i++) {
		if (form_names_arr[i] == form_name) {
			std::cout << "Intern has successfully created form " << forms[i]->getName() << std::endl;
			{
				for (int j = 0; j < 3; j++) {
					if (j != i)
						delete forms[j];
				}
				return (forms[i]);
			}
		}
	}
	for (size_t j = 0; j < 3; j++)
		delete forms[j];
	std::cout << "Intern can't create form " << form_name << " because:";
	throw UnknownFormName();
}
