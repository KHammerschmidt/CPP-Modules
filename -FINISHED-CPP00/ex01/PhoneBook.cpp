#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	position = 0;
}

PhoneBook::~PhoneBook()
{
}

int	PhoneBook::Exit(void)
{
	Output::ExitPhoneBook();
	return (EXIT_SUCCESS);
}

void	PhoneBook::AddContact(
		std::string firstname,
		std::string lastname,
		std::string	nickname,
		std::string phonenumber,
		std::string darkestsecret)
{
	contact[position % 8].setFirstname(firstname);
	contact[position % 8].setLastname(lastname);
	contact[position % 8].setNickname(nickname);
	contact[position % 8].setPhonenumber(phonenumber);
	contact[position % 8].setDarkestSecret(darkestsecret);
	position++;
}

std::string	PhoneBook::AddFirstname()
{
	std::string string;

	Output::PromptFirstname();
	string = Input::ScanString();
	if (string.empty() || !Helper::ValidString(string, isalpha))
	{
		Output::PrintStringEndl(std::string("Error: Invalid Firstname"));
		return(AddFirstname());
	}
	return (string);
}

std::string	PhoneBook::AddLastname()
{
	std::string string;

	Output::PromptLastname();
	string = Input::ScanString();
	if (string.empty() || !Helper::ValidString(string, isalpha))
	{
		Output::PrintStringEndl(std::string("Error: Invalid Lastname"));
		return(AddLastname());
	}
	return (string);
}

std::string	PhoneBook::AddNickname()
{
	std::string string;

	Output::PromptNickname();
	string = Input::ScanString();
	if (string.empty() || !Helper::ValidString(string, isalpha))
	{
		Output::PrintStringEndl(std::string("Error: Invalid Nickname"));
		return(AddNickname());
	}
	return (string);
}

std::string	PhoneBook::AddPhonenumber()
{
	std::string string;

	Output::PromptPhonenumber();
	string = Input::ScanString();
	if (string.empty() || !Helper::ValidString(string, isdigit))
	{
		Output::PrintStringEndl(std::string("Error: Invalid Phonenumber"));
		return(AddPhonenumber());
	}
	return (string);
}

std::string	PhoneBook::AddDarkestsecret()
{
	std::string string;

	Output::PromptDarkestsecret();
	string = Input::ScanString();
	if (string.empty())
	{
		Output::PrintStringEndl(std::string("Error: Invalid Darkestsecret"));
		return(AddDarkestsecret());
	}
	return (string);
}


void	PhoneBook::Add(void)
{
	Output::PrintStringEndl(std::string(""));
	Output::PrintStringEndl(std::string("To add a new contact please enter all contact details below:"));
	PhoneBook::AddContact(
		AddFirstname(),
		AddLastname(),
		AddNickname(),
		AddPhonenumber(),
		AddDarkestsecret()
	);
}

bool PhoneBook::ValidIndex(unsigned int index)
{
	if (index < 1 || index > 8 || index > position)
		return (false);
	return (true);
}

unsigned int	PhoneBook::IndexSearch(void)
{
	unsigned int	index;
	std::string		indexStr;

	while (1)
	{
		Output::PromptIndex();
		indexStr = Input::ScanString();
		if (indexStr.empty())
			continue ;
		if (!Helper::Iterate(indexStr, isdigit))
		{
			Output::PrintStringEndl(std::string("Error. The index can only contain digits."));
			continue ;
		}
		index = atoi(indexStr.c_str());
		if (!ValidIndex(index))
		{
			Output::PrintStringEndl(std::string("Error: Invalid Index."));
			continue ;
		}
		return (index);
	}
}

void PhoneBook::DisplayContact(int i)
{
	Output::PrintStringEndl(std::string(""));
	Output::PrintString(std::string("Firstname: "));
	Output::PrintStringEndl(contact[i].getFirstname());
	Output::PrintString("Lastname: ");
	Output::PrintStringEndl(contact[i].getLastname());
	Output::PrintString("Nickname: ");
	Output::PrintStringEndl(contact[i].getNickname());
	Output::PrintString("Phonenumber: ");
	Output::PrintStringEndl(contact[i].getPhonenumber());
	Output::PrintString("Darkestsecret: ");
	Output::PrintStringEndl(contact[i].getDarkestSecret());
	Output::PrintStringEndl(std::string(""));
}

void PhoneBook::Search(void)
{
	unsigned int index;

	if (position == 0)
	{
		Output::PrintStringEndl(std::string("Phonebook empty. Nothing to display."));
		return ;
	}
	DisplayPhoneBook();
	Output::PrintStringEndl("");
	index = IndexSearch();
	DisplayContact(index - 1);
}

void PhoneBook::DisplayContactColumns(int i)
{
	std::cout << std::setw(10) << std::right << i + 1;
	Output::PrintString(std::string(" | "));
	Output::PrintColumn(contact[i].getFirstname());
	Output::PrintString(std::string(" | "));
	Output::PrintColumn(contact[i].getLastname());
	Output::PrintString(std::string(" | "));
	Output::PrintColumn(contact[i].getNickname());
	std::cout << std::endl;
}

void PhoneBook::DisplayHeader(void)
{
	Output::PrintColumn(std::string("Index"));
	Output::PrintString(std::string(" | "));
	Output::PrintColumn(std::string("First Name"));
	Output::PrintString(std::string(" | "));
	Output::PrintColumn(std::string("Last Name"));
	Output::PrintString(std::string(" | "));
	Output::PrintColumn(std::string("Nickname"));
	Output::PrintStringEndl(std::string(""));
}

void PhoneBook::DisplayPhoneBook(void)
{
	DisplayHeader();
	for (unsigned int i = 0; i < position; i++)
	{
		if (i == 8)
			break ;
		DisplayContactColumns(i);
	}
}
