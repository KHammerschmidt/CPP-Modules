#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;	//how to access const
}

HumanA::HumanA()
{
	std::cout << "Constructor called" << std::endl;
	Weapon::setType
}

HumanA::~HumanA()
{
}