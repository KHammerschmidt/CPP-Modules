#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("no name"), _grade(150) {} 
Bureaucrat::~Bureaucrat() {}
const std::string Bureaucrat::getName(void) const { return this->_name; }
int Bureaucrat::getGrade(void) const { return this->_grade; }

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	this->_grade = other._grade;

	return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;

	return os;
}

void	Bureaucrat::incrementGrade(void)
{
	if ((this->_grade - 1) < 1)
		throw GradeTooHighException();
	else
		this->_grade -= 1;
}

void	Bureaucrat::decrementGrade(void)
{
	if ((this->_grade + 1) > 150)
		throw GradeTooLowException();
	else
		this->_grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception: grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception: grade too low");
}
