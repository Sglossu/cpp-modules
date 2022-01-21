#pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form {
	std::string target;
public:
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& ppf);
	RobotomyRequestForm &operator=(const RobotomyRequestForm& rrf);
	~RobotomyRequestForm();

	const std::string &getTarget() const;
	void execute(Bureaucrat const & executor) const;
};
