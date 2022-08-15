#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat Malcolm("Malcolm", 35);

	std::cout << "Try to create a form with too high grades" << std::endl;
	try
	{
		Form form1("First Form too low", 0, -2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "Try to create a form with too low grades" << std::endl;
	try
	{
		Form form2("Second Form too High", 200, 220);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "Creating a valid form and signing it" << std::endl;
	Form form3("THIRD", 50, 20);
	std::cout << form3 << std::endl;
	try
	{
		form3.beSigned(Malcolm);
		Malcolm.signForm(form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "Trying to sign a form which is too low" << std::endl;
	Form form4("FOURTH", 15, 10);
	std::cout << form4 << std::endl;
	try
	{
		// Malcolm.signForm(form4);
		form4.beSigned(Malcolm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}