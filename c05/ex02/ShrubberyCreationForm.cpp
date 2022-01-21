#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
Form("ShrubberyCreationForm", 145, 137) {
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &scf) : Form (scf) {
	*this = scf;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &scf) {
	if (this == &scf)
		return (*this);
	this->target = scf.target;
	return (*this);
}

const std::string &ShrubberyCreationForm::getTarget() const {
	return target;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout <<
	         "|                  #                  |" << std::endl <<
	         "|                 ***                 |" << std::endl <<
	         "|                *****                |" << std::endl <<
	         "|               *****~~               |" << std::endl <<
	         "|                **~~~                |" << std::endl <<
	         "|               *~~~***               |" << std::endl <<
	         "|              ~~~******              |" << std::endl <<
	         "|             ~~*********             |" << std::endl <<
	         "|            *************            |" << std::endl <<
	         "|             ***********             |" << std::endl <<
	         "|            *************            |" << std::endl <<
	         "|           ***************           |" << std::endl <<
	         "|         *@***************           |" << std::endl <<
	         "|         ***@************@**         |" << std::endl <<
	         "|        *@****************@**        |" << std::endl <<
	         "|          @****************          |" << std::endl <<
	         "|         *******************         |" << std::endl <<
	         "|        *****@***************        |" << std::endl <<
	         "|       ***********************       |" << std::endl <<
	         "|      ********@****************      |" << std::endl <<
	         "|     *****************@*********     |" << std::endl <<
	         "|    *****************************    |" << std::endl <<
	         "|                |||||                |" << std::endl <<
	         "|                |||||                |" << std::endl;
}