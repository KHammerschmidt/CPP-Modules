#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clapTrap("test");

	for (int i = 0; i < 5; i++)
		clapTrap.attack("test2");

	clapTrap.beRepaired(2);

	for (int i = 0; i < 4; i++)
		clapTrap.attack("test2");

	clapTrap.beRepaired(2);

	return 0;
}