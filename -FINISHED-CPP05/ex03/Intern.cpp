#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern has been created." << std::endl;
}

Intern::~Intern() {}

int	Intern::fetchFormType(std::string name)
{
	std::string formTypes[] = {"Shrubbery", "Robotomy", "Presidential"};
	for (int i = 0; i < 3; i++)
	{
		if (formTypes[i] == name)
			return i;
	}
	return 4;
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	switch (fetchFormType(name))
	{
		default :
		{
			throw FormException();
			break ;
		}
		case 0 :
			return (new ShrubberyCreationForm(target));
		case 1 :
			return (new RobotomyRequestForm(target));
		case 2 :
			return (new PresidentialPardonForm(target));
	}
}

const char* Intern::FormException::what() const throw()
{
	return ("Exception: invalid form type requested. Valid form requests are: Shrubbery, Robotomy, Presidential");
}
