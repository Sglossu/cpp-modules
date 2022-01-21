#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
	Form("PresidentialPardonForm", 25, 5) {
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ppf) : Form(ppf) {
	*this = ppf;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &ppf) {
	if (this == &ppf)
		return (*this);
	this->target = ppf.target;
	return (*this);
}

const std::string &PresidentialPardonForm::getTarget() const {
	return target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
