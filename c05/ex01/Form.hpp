#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Form {
	std::string	name;
	bool 			is_signed;
	unsigned int	grade_sign;
	unsigned int 	grade_exec;
public:
	Form(const std::string name, unsigned int grade_sign, unsigned int grade_exec);
	Form(const Form &other);
	Form & operator=(Form const &other);

	~Form();

	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw();
	};

	const std::string &getName() const;
	bool isSigned() const;
	unsigned int getGradeSign() const;
	unsigned int getGradeExec() const;
	void beSigned(Bureaucrat &b);
};

std::ostream &operator<<(std::ostream &os, const Form &form);