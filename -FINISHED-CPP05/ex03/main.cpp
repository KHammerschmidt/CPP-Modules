#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
    Intern  someRandomIntern;
    Form*   rrf;

	std::cout << "First test: intern creates Robotomy Form" << std::endl;
	try
	{
 	   rrf = someRandomIntern.makeForm("Robotomy", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	std::cout << "Second test: Signing Form by Bureaucrat and executing it." << std::endl;
	Bureaucrat Tom("Tom", 3);
	try
	{
		rrf->beSigned(Tom);
		rrf->execute(Tom);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}