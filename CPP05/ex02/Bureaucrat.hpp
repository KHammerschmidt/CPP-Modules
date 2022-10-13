#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
	Bureaucrat();

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& other);
	~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat& other);

	const std::string 	getName(void) const;
	int					getGrade(void) const;

	void	incrementGrade(void);
	void	decrementGrade(void);

	void	signForm(Form& form);

	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& other);


#endif