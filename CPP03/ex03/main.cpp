#include "DiamondTrap.hpp"

int	main(void)
{
	// ClapTrap*	ptr;
	// ptr = new ScavTrap("Katharina");

	// ptr->attack("target");

	// delete ptr;


	DiamondTrap test("Katharina");

	test.whoAmI();
	test.printAttributes();
	for (int i = 0; i != 3; i++)
		test.attack("evaluator");
	test.highFivesGuys();
	test.beRepaired(2);

	test.whoAmI();
	test.printAttributes();


	return 0;
}