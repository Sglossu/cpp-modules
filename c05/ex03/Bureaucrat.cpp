#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) {
	this->name = name;
	if (grade < 1) {
		std::cout << "For " << name << ":";
		throw Bureaucrat::GradeTooHighException();
	}
	if (grade > 150) {
		std::cout << "For " << name << ":";
		throw Bureaucrat::GradeTooLowException();
	}
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
	*this = other;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->grade = other.grade;
	return (*this);
}

void Bureaucrat::increment() {
	if (grade - 1 < 1) {
		std::cout << "For " << name << ":";
		throw Bureaucrat::GradeTooHighException();
	}
	grade--;
}

void Bureaucrat::decrement() {
	if (grade + 1 > 150) {
		std::cout << "For " << name << ":";
		throw Bureaucrat::GradeTooLowException();
	}
	grade++;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return " grade is too Low!";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return " grade is too High!";
}

void Bureaucrat::signForm(Form &form) {
	form.beSigned(*this);
}

const std::string &Bureaucrat::getName() const { return name; }

unsigned int Bureaucrat::getGrade() const {	return grade; }

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << "Bureaucrat name: " << bureaucrat.getName() << "; grade: " << bureaucrat.getGrade();
	return os;
}

void Bureaucrat::executeForm(const Form &form) {
	if (form.isSigned()) {
		if (grade > form.getGradeExec())
			std::cout << "Grade is too low for execute this form!" << std::endl;
		else {
			std::cout << "Bureaucrat " + name + " executes form " + form.getName() << std::endl;
			form.execute(*this);
		}
	}
	else
		std::cout << "Form " << form.getName() << " is not signed" << std::endl;

}