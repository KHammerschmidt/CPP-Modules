#include "PhoneBook.hpp"

/* Program to create a Phonebook. Ability to add a new contact, */
/* search for a contact and exit the phonebook. 				*/
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

}
