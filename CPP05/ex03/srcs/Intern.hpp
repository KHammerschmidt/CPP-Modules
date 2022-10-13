#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;
class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

class Intern
{
public:
	Intern();
	~Intern();

	Form*	makeForm(std::string name, std::string target);
	int		fetchFormType(std::string name);

	class FormException : public std::exception
	{
		const char* what() const throw();
	};
};

#endif