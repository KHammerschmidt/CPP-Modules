#include "Form.hpp"

Form::Form(void) : _name("unnamed"), _signed(false), _gradeSign(150), _gradeExec(150) {}

Form::Form(std::string name, int signInt, int execInt)
	: _name(name), _signed(false), _gradeSign(signInt), _gradeExec(execInt)
{
	if (this->_gradeExec > 150 || this->_gradeSign > 150)
		throw GradeTooLowException();
	if (this->_gradeExec < 1 || this->_gradeSign < 1)
		throw GradeTooHighException();
	// std::cout << this->_name << " has been created!" << std::endl;
}

Form::Form(const Form& other)
	: _name(other.getName()), _gradeSign(other.getGradeSign()), _gradeExec(other.getGradeExec())
{
	*this = other;
}

Form& Form::operator=(const Form& other)
{
	this->_signed = other._signed;
	return *this;
}

Form::~Form() {}

std::string Form::getName(void) const { return this->_name; }
bool		Form::getStatus(void) const { return this->_signed; }
int			Form::getGradeSign(void) const { return this->_gradeSign; }
int			Form::getGradeExec(void) const { return this->_gradeExec; }

void Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeSign)
	{
		std::cout << bureaucrat.getName() << " couldn't sign " << this->_name << " because ";
		throw GradeTooLowException();
	}
	else
		this->_signed = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os << std::endl;
	os << "Form name: " << form.getName() << std::endl;
	if (form.getStatus() == 0)
		os << "Sign status: not signed" << std::endl;
	else
		os << "Sign status: signed" << std::endl;
	os << "Grade required to sign: " << form.getGradeSign() << std::endl;
	os << "Grade required to execute: " << form.getGradeExec() << std::endl;

	return os;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException");
}

const char* Form::NotSignedException::what() const throw()
{
	return ("NotSignedException");
}

void Form::execute(Bureaucrat const& executor) const
{
	if (this->_signed != true)
	{
		std::cout << executor.getName() << " couldn't execute " << this->_name << " because ";
		throw NotSignedException();
	}
	if (executor.getGrade() > this->_gradeExec)
	{
		std::cout << executor.getName() << " couldn't execute " << this->_name << " because ";
		throw GradeTooLowException();
	}
	
	executeSubForm();
	std::cout << executor.getName() << " executed " << this->_name << std::endl;		
}