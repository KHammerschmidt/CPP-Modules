#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor DiamondTrap called!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& diamondTrap)
{
	*this = diamondTrap;
}

DiamondTrap::DiamondTrap(const std::string name)
{
	std::cout << "Constructor DiamondTrap std::string name called!" << std::endl;

	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

void DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap called!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
	FragTrap::operator=(diamondTrap);

	return *this;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am: " << this->_name << " & " << ClapTrap::_name << std::endl;
}
