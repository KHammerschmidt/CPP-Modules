#include "ScavTrap.hpp"

int	main(void)
{
	// ClapTrap* ptr = new ScavTrap("NAME");

	// for (int i = 0; i < 3; i++)
	// 	ptr->attack("OPPONENT");

	// dynamic_cast<ScavTrap*>(ptr)->guardGate();
	// ptr->beRepaired(2);
	// delete ptr;

	ScavTrap test("NAME");
	for (int i = 0; i != 3; i++)
		test.attack("OPPONENT");
	test.guardGate();
	test.beRepaired(2);

	return 0;
}
