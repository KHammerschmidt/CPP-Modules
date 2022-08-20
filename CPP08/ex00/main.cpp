#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> test;

	for (int i = 0; i < 10; i++)
		test.push_back(i % 2 + 3);

	try
	{
		std::cout << "Test I: value of 3 is found" << std::endl;
		std::vector<int>::iterator it = easyfind(test, 3);
		std::cout << *it << std::endl;

		std::cout << "Test II: value of 19 is not found" << std::endl;
		std::vector<int>::iterator it2 = easyfind(test, 19);
		std::cout << *it2 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
