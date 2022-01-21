#pragma once
#include "Form.hpp"

class PresidentialPardonForm : public Form {
	std::string target;
public:
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& ppf);
	PresidentialPardonForm &operator=(const PresidentialPardonForm& ppf);
	~PresidentialPardonForm();

	const std::string &getTarget() const;
	void execute(Bureaucrat const & executor) const;
};
