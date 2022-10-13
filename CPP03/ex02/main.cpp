#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap*	ptr;
	ptr = new FragTrap("Katharina");

	for (int i = 0; i < 3; i++)
		ptr->attack("OPPONENT");

	dynamic_cast<FragTrap*>(ptr)->highFivesGuys();
	ptr->beRepaired(15);

	delete ptr;

	// FragTrap test("evaluator");
	// for (int i = 0; i != 3; i++)
	// 	test.attack("target");
	// test.highFivesGuys();
	// test.beRepaired(2);

	// system ("leaks FragTrap");

	return 0;
}