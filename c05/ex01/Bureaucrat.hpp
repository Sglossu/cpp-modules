#pragma once
#include <iostream>

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
	std::string signForm(bool is_sign, std::string name);
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);