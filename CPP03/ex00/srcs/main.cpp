#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clapTrap("THIS_IS_MY_NAME");

	for (int i = 0; i < 5; i++)
		clapTrap.attack("OPPONENT");

	clapTrap.beRepaired(2);

	for (int i = 0; i < 4; i++)
		clapTrap.attack("OPPONENT");

	clapTrap.beRepaired(2);

	return 0;
}