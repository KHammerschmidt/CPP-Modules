#include "Convert.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: invalid number of arguments" << std::endl;
		return 1;
	}

	Convert convert(argv[1]);

	convert.convertScalarTypes(argv[1]);

	return 0;
}
