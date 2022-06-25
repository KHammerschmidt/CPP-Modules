#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeSign;
	const int			_gradeExec;

public:
	Form();
	Form(std::string name, int signInt, int execInt);
	Form(const Form& other);
	Form& operator=(const Form& other);
	virtual ~Form();

	std::string	getName(void) const;
	bool		getStatus(void) const;
	int			getGradeSign(void) const;
	int			getGradeExec(void) const;

	void beSigned(Bureaucrat& bureaucrat);
	void execute(Bureaucrat const& executor) const;
	virtual void	executeSubForm(void) const = 0;

	class GradeTooHighException : public std::exception
	{
		public: 
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public: 
			const char* what() const throw();
	};

	class NotSignedException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif