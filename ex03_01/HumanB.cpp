#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;	//how to access const
}

HumanA::HumanB()
{
}

HumanA::~HumanB()
{
}
