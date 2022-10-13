#include "Harl.hpp"

Harl::Harl() { }
Harl::~Harl() { }

void Harl::debug(void)
{
	std::cout << "\033[0;32mI want to debug this code! Beep Boop!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "\033[0;34mI would like to give you some info! Beep Boop!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "\033[0;33mWARNING WARNING! BEEP BOOP!" << std::endl;
}

void Harl::error(void)
{
	std::cout << "\033[0;31mThis is unacceptable! An error occured!" << std::endl;
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
