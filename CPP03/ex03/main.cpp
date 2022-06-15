#include "DiamondTrap.hpp"

int	main(void)
{
	// ClapTrap*	ptr;
	// ptr = new ScavTrap("Katharina");

	// ptr->attack("target");

	// delete ptr;


	DiamondTrap test("evaluator");
	for (int i = 0; i != 3; i++)
		test.attack("target");
	test.highFivesGuys();
	test.beRepaired(2);

	return 0;
}