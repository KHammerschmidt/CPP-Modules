#include <iostream>
#include <string>
#include <iomanip>

int	main(void)
{
	std::string var = "HI THIS IS BRAIN";
	std::string* stringPTR = &var;
	std::string& stringRef = var;

	std::cout << "The memory address of string variable: " << &var << std::endl;
	std::cout << "The memory address held by stringPTR. " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF. " << &stringRef << std::endl;

	std::cout << std::endl;

	std::cout << "The value of the string variable. " << var << std::endl;
	std::cout << "The value pointed to by stringPTR. " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF. " << stringRef << std::endl;

	return 0;
}
