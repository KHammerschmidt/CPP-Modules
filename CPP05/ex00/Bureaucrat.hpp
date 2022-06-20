#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
private:
	const std::string	_name;
	unsigned int		_grade;

public:
	Bureaucrat();
	~Bureaucrat();

	//from 1 highest possible grade to 150 lowest possible grade

	void	GradeTooHighException(void);
	void	GradeTooLowException(void);

	std::string const getName(void) const;
	unsigned int const	getGrade(void) const;

	void	incrementGrade(void);
	void	decrementGrade(void);
};

ostream& operator<<(ostream& os, const Bureaucrat& other)
{
	os <<

	return os;
}

#endif