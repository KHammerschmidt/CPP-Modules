# include "Output.hpp"

void Output::DisplayWelcomingMessage(void)
{
	Output::PrintStringEndl(std::string(""));
	Output::PrintStringEndl(std::string("          *~*~*~*~   WELCOME TO YOUR PHONEBOOK   ~*~*~*~*"));
}

void Output::DisplayCase(void)
{
	std::cout << std::setw(65) << " ________________________________________________________________" << std::endl;
	std::cout << std::setw(65) << "|                                                                |" << std::endl;
	std::cout << std::setw(65) << "|      PLEASE ENTER ONE OF THE FOLLOWING COMMANDS BELOW          |" << std::endl;
	std::cout << std::setw(65) << "|      - - - - - - - - - - - - - - - - - - - - - - - - - -       |" << std::endl;
	std::cout << std::setw(65) << "|      ADD    : to add a new contact                             |" << std::endl;
	std::cout << std::setw(65) << "|      - - - - - - - - - - - - - - - - - - - - - - - - - -       |" << std::endl;
	std::cout << std::setw(65) << "|      SEARCH : to see an overview of all contacts and           |" << std::endl;
	std::cout << std::setw(65) << "|               select one specific contact                      |" << std::endl;
	std::cout << std::setw(65) << "|      - - - - - - - - - - - - - - - - - - - - - - - - - -       |" << std::endl;
	std::cout << std::setw(65) << "|      EXIT   : to exit the phonebook                            |" << std::endl;
	std::cout << std::setw(65) << "|      - - - - - - - - - - - - - - - - - - - - - - - - - -       |" << std::endl;
	std::cout << std::setw(65) << "|________________________________________________________________|" << std::endl;
	std::cout << std::endl;
}

void Output::ExitPhoneBook(void)
{
	std::cout << std::setw(65) << " ________________________________________________________________" << std::endl;
	std::cout << std::setw(65) << "|                                                                |" << std::endl;
	std::cout << std::setw(65) << "|      - - - - - - - - - - - - - - - - - - - - - - - - - -       |" << std::endl;
	std::cout << std::setw(65) << "|      LEAVING YOUR PHONEBOOK IMMEDIATELY. YOU SUCCESSFULLY,     |" << std::endl;
	std::cout << std::setw(65) << "|             DELETED ALL YOUR CONTACTS! WELL DONE!              |" << std::endl;
	std::cout << std::setw(65) << "|      - - - - - - - - - - - - - - - - - - - - - - - - - -       |" << std::endl;
	std::cout << std::setw(65) << "|________________________________________________________________|" << std::endl;
	std::cout << std::endl;
}

void Output::PromptIndex(void)
{
	PrintString(std::string("Enter index to see a contact's details: "));
}

void Output::PrintColumn(std::string string)
{
	std::string truncString;

	truncString = Helper::Truncate(string);
	std::cout << std::setw(10) << std::right << truncString;
}

void	Output::PrintStringEndl(std::string string)
{
	std::cout << string << std::endl;
}

void	Output::PrintString(std::string string)
{
	std::cout << string;
}

void	Output::PromptFirstname()
{
	PrintString(std::string("Enter First Name: "));
}

void	Output::PromptLastname()
{
	PrintString(std::string("Enter Last Name: "));
}

void	Output::PromptNickname()
{
	PrintString(std::string("Enter Nickname: "));
}

void	Output::PromptDarkestsecret()
{
	PrintString(std::string("Enter Darkest Secret: "));
}

void	Output::PromptPhonenumber()
{
	PrintString(std::string("Enter Phone Number: "));
}

void	Output::PromptCommand()
{
	PrintString(std::string("Enter Command: "));
}
