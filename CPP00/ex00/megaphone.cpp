#include <iostream>

void get_input(char **argv, std::string& string)
{
	for (int i = 1; argv[i]; i++)
		string += argv[i];
}

std::string string_to_upper(std::string string)
{
	for (size_t j = 0; j < string.length(); j++)
		string[j] = std::toupper(string[j]);
	return (string);
}

int	main(int argc, char **argv)
{
	std::string string;

	if (argc > 1)
		get_input(argv, string);
	else
		string = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << string_to_upper(string) << std::endl;
	return 0;
}
