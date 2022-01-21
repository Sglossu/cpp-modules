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

const char *Form::FormNotSigned::what() const throw() {
	return " form is nit signed!";
}

const char *Form::FormAlreadySigned::what() const throw() {
	return " form is already signed!";
}

void Form::beSigned(Bureaucrat &b) {
	if (this->grade_sign >= b.getGrade()) {
		this->is_signed = true;
		std::cout << "Bureaucrat " << b.getName() << " signs " << this->name <<  std::endl;
	}
	else {
		std::cout << "Bureaucrat " << b.getName() << " cannot sign form " <<  this->name << " because:";
		if (this->is_signed)
			throw Form::FormAlreadySigned();
		else
			throw Form::GradeTooLowException();
	}
}

void Form::execute(const Bureaucrat &executor) const {
	if (this->is_signed) {
		if (grade_exec > executor.getGrade())
			std::cout << executor.getName() << " has successfully executed " << this->name << std::endl;
		else
			throw Form::GradeTooLowException();
	}
	else
		throw Form::FormNotSigned();
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