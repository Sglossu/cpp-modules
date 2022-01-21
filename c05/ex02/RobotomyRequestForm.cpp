#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
Form("RobotomyRequestForm", 72, 45) {
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rrf) : Form(rrf) {
	*this = rrf;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &ppf) {
	if (this == &ppf)
		return (*this);
	this->target = ppf.target;
	return (*this);
}

const std::string &RobotomyRequestForm::getTarget() const {
	return target;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << "VVVVVvvvvvvjjjjjjj....!";
	if (rand() % 2)
		std::cout << target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Something was wrong with robotomized " << target << std::endl;
}