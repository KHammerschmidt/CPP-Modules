#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(true), FragTrap(true)
{
	std::cout << "Default constructor DiamondTrap called!" << std::endl;

	this->_name = "_diamond_trap";
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "Attack damage: FragTrap: " << FragTrap::_attackDamage << "und scavTrap: ";
	std::cout << ScavTrap::_attackDamage << " und claptrap: " << ClapTrap::_attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& diamondTrap) : ScavTrap(diamondTrap), FragTrap(diamondTrap)
{
	std::cout << "DiamondTrap copy constructor called!" << std::endl;
	*this = diamondTrap;
}

DiamondTrap::DiamondTrap(const std::string name) : ScavTrap(true), FragTrap(true)
{
	std::cout << "Name-Constructor DiamondTrap called!" << std::endl;

	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap called!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
	ClapTrap::operator=(diamondTrap);
	ClapTrap::_name = diamondTrap._name + "_clap_trap";

	return *this;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am: " << this->_name << " & my base class name is: " << ClapTrap::_name << std::endl;
}
