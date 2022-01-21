#pragma once
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
	std::string		name;
	unsigned int	grade;
public:
	Bureaucrat(const std::string name, unsigned int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat & operator=(Bureaucrat const &other);

	~Bureaucrat();

	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw();
	};

	const std::string &getName() const;
	unsigned int getGrade() const;

	void increment();
	void decrement();
	void signForm(Form &form);
	void executeForm(Form const & form);
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);