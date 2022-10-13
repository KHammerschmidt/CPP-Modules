#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I want to debug this code! Beep Boop!" << std::endl;
	std::cout << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I would like to give you some info! Beep Boop!" << std::endl;
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "WARNING WARNING! BEEP BOOP!" << std::endl;
	std::cout << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! An error occured!" << std::endl;
	std::cout << std::endl;
}

static const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

int	Harl::getLevel(std::string& level)
{
	int i = 0;
	while (i < 4)
	{
		if (level == levels[i])
			break ;
		i++;
	}
	return (i);
}

void Harl::complain(std::string level)
{
	void (Harl::*func[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	switch (getLevel(level))
	{
		default :
		{
			std::cout << "Probably complaining about insignificant problem!" << std::endl;
			break ;
		}
		case 0 :
			(this->*(func[0]))();
		case 1 :
			(this->*(func[1]))();
		case 2 :
			(this->*(func[2]))();
		case 3 :
			(this->*(func[3]))();
	}
}