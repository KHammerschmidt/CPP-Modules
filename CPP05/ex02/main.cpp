#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{

	Bureaucrat Malcolm("malcolm", 140);
	ShrubberyCreationForm	Shrubby("HIHI");
	try
	{
		Shrubby.execute(Malcolm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// try
	// {
	// 	Shrubby.beSigned(Malcolm);
	// 	// Malcolm.signForm(Shrubby);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// try
	// {
	// 	Shrubby.execute(Malcolm);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	



	return 0;
}