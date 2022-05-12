#ifndef INPUT_HPP
# define INPUT_HPP

#include "PhoneBook.hpp"

typedef enum e_cmd
{
	ADD,
	SEARCH,
	EXIT,
	ERROR
}			t_cmd;

namespace Input
{
	std::string ScanString();
	t_cmd		ScanCommand();
}

#endif