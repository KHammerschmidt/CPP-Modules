#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << "First Test with Shrubbery!" << std::endl;
	Bureaucrat Malcolm("Malcolm", 137);
	ShrubberyCreationForm	Shrubby("Shrub");
	try
	{
		// Shrubby.execute(Malcolm);
		Shrubby.beSigned(Malcolm);
		Malcolm.signForm(Shrubby);
		Shrubby.execute(Malcolm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	std::cout << "Second Test with Robotomy!" << std::endl;
	Bureaucrat Derek("Derek", 45);
	RobotomyRequestForm	Roby("Roberta");
	try
	{
		// Roby.execute(Derek);
		Roby.beSigned(Derek);
		Derek.signForm(Roby);
		Roby.execute(Derek);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;

	std::cout << "Third Test with President!" << std::endl;
	Bureaucrat Jim("Jim", 5);
	PresidentialPardonForm Pressi("HUHU");
	try
	{
		// Roby.execute(Malcolm);
		Pressi.beSigned(Jim);
		Jim.signForm(Pressi);
		Pressi.execute(Jim);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}