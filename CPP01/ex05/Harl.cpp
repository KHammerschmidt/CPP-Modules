#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "I want to debug this code! Beep Boop!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I would like to give you some info! Beep Boop!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING WARNING! BEEP BOOP!" << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! An error occured!" << std::endl;
}

static const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

void Harl::complain(std::string level)
{
	void (Harl::*func[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (size_t i = 0; i < 4; i++)
	{
		if (!(level.compare(levels[i])))
		{
			(this->*(func[i]))();
			break ;
		}
	}
}
