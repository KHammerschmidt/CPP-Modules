#include "Convert.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: invalid number of arguments" << std::endl;
		return 1;
	}

	Convert convert(argv[1]);

	convert.convertToChar(argv[1]);
	std::cout << convert << std::endl;

	return 0;
}