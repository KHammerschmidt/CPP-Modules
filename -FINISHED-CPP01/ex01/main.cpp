#include "Zombie.hpp"

int	main( void )
{
	int	num = 3;
	Zombie* Horde = zombieHorde(num, std::string("ZOMBIIIIIIESSS"));

	for (int i = 0; i < num; i++)
		Horde->announce();

	delete[] Horde;
}

