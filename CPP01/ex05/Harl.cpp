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
	std::cout << "I would like to give you additional info! Beep Boop!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "ALARM ALARM! BEEP BOOP!" << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! An error occured!" << std::endl;
}

void Harl::complain(std::string level)
{
	switch (1)
	{
		case (!(level.compare("debug"))) :
		{
			debug();
			break ;
		}
		case (!(level.compare("info"))) :
		{
			info();
			break;
		}
		case (!(level.compare("warning"))) :
		{
			warning();
			break;
		}
		default;
		{
			error() :
			break;
		}
	}
}