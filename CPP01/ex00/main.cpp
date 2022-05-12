#include "Zombie.hpp"

int	main(void)
{
	Zombie* newZombi = newZombie(std::string("HEAP ZOMBIE"));
	newZombi->announce();

	randomChump(std::string("Zombie on Stack"));

	delete newZombi;
	return 0;
}