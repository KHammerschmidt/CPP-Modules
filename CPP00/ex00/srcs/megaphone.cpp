#include <iostream>

/* Writes the input given in capitals or prints noise message when no input. */
int	main(int argc, char **argv)
{
	std::string string;

	if (argc > 1)
	{
		for (int i = 1; argv[i]; i++)
			string += argv[i];
	}
	else
		string = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	for (size_t j = 0; j < string.length(); j++)
		string[j] = std::toupper(string[j]);

	std::cout << string << std::endl;

}
