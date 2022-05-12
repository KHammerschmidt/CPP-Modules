#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;

	Output::DisplayWelcomingMessage();
	Output::DisplayCase();
	while(1)
	{
		switch (Input::ScanCommand())
		{
			case ADD :
			{
				phonebook.Add();
				break ;
			}
			case SEARCH :
			{
				phonebook.Search();
				break ;
			}
			case EXIT :
				return (phonebook.Exit());
			default:
			{
				Output::PrintStringEndl(std::string("Error. Invalid command."));
				break;
			}
		}
		Output::PrintStringEndl(std::string(""));
	}
	return (0);
}
