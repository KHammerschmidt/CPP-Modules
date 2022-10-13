#include "DiamondTrap.hpp"

// name in attack function (ScavTrap Katharina_clap_name) why name wrong?
int	main(void)
{
	// ClapTrap* ptr;
	// ptr = new DiamondTrap("Katharina");

	// for (int i = 0; i < 3; i++)
	// 	ptr->attack("TARGET");

	// dynamic_cast<DiamondTrap*>(ptr)->highFivesGuys();
	// ptr->beRepaired(15);
	// dynamic_cast<DiamondTrap*>(ptr)->whoAmI();

	// delete ptr;

	DiamondTrap test("KATHARINA");

	test.whoAmI();
	for (int i = 0; i != 3; i++)
		test.attack("EVALUATOR");
	test.highFivesGuys();
	test.beRepaired(2);

	test.whoAmI();


	return 0;
}