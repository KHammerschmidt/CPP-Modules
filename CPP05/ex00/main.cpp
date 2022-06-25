#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "First test" << std::endl;
	try
	{
		Bureaucrat test1("test1", 160);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Second test" << std::endl;
	try
	{
		Bureaucrat test2("test2", -200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Third test" << std::endl;
	try
	{
		Bureaucrat test3("test3", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Fourth test" << std::endl;
	try
	{
		Bureaucrat test4("test4", 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Fifth test" << std::endl;
	try
	{
		Bureaucrat test5("test5", 150);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Sixth test" << std::endl;
	try
	{
		Bureaucrat test6("test6", 60);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}