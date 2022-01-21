#include "Form.hpp"

Form::Form(const std::string name, unsigned int grade_sign, unsigned int grade_exec) {
	this->name = name;
	this->is_signed = false;
	if (grade_sign < 1 || grade_exec < 1)
		throw Form::GradeTooHighException();
	if (grade_sign > 150 || grade_exec > 150)
		throw Form::GradeTooLowException();
	this->grade_sign = grade_sign;
	this->grade_exec = grade_exec;
}

Form::Form(const Form &other) {
	grade_exec = other.grade_exec;
	grade_sign = other.grade_sign;
	*this = other;
}

Form::~Form() {}

Form &Form::operator=(const Form &other) {
	if (this == &other)
		return (*this);
	is_signed = other.is_signed;
	return (*this);
}

const char *Form::GradeTooLowException::what() const throw() {
	return " grade is too Low!";
}

const char *Form::GradeTooHighException::what() const throw() {
	return " grade is too High!";
}

void Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() < grade_sign) {
		is_signed = true;
		std::cout << b.signForm(is_signed, name) << std::endl;
	}
	else {
		is_signed = false;
		std::cout << b.signForm(is_signed, name);
		throw Bureaucrat::GradeTooLowException();
	}
}

const std::string &Form::getName() const { return name; }

bool Form::isSigned() const { return is_signed; }

unsigned int Form::getGradeSign() const { return grade_sign; }

unsigned int Form::getGradeExec() const { return grade_exec; }

std::ostream &operator<<(std::ostream &os, const Form &form) {
	if (form.isSigned())
		os << "Form: " << form.getName() <<  "; grade for sign: " << form.getGradeSign()
		<< "; grade for execute: " << form.getGradeExec() << "; status: signed";
	else
		os << "Form: " << form.getName() <<  "; grade for sign: " << form.getGradeSign()
		<< "; grade for execute: " << form.getGradeExec() << "; status: not signed";
	return os;
}