#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::~Bureaucrat()
{
}

void	Bureaucrat::incrementGrade(void)
{
	//if out of range throw exceptions
	this->_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	//if out of range throw exceptions
	this->_grade++:
}

std::string const Bureaucrat::getName(void) const { return this->_name; }
unsigned int Bureaucrat::getGrade(void) const { return this->_grade; }
