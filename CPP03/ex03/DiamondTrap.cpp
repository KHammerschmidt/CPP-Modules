#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
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

DiamondTrap::DiamondTrap(DiamondTrap const& diamondTrap) : FragTrap(diamondTrap), ScavTrap(diamondTrap)
{
	std::cout << "DiamondTrap copy constructor called!" << std::endl;
	*this = diamondTrap;
}

DiamondTrap::DiamondTrap(const std::string name) : FragTrap(name), ScavTrap(name)
{
	std::cout << "Name-Constructor DiamondTrap called!" << std::endl;

	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "Attack damage: FragTrap: " << FragTrap::_attackDamage << "und scavTrap: ";
	std::cout << ScavTrap::_attackDamage << " und claptrap: " << ClapTrap::_attackDamage << std::endl;
	std::cout << "diamond damage: " << this->_attackDamage << std::endl;
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

void	DiamondTrap::printAttributes(void)
{
	std::cout << "Hit points: " << FragTrap::_hitPoints << " ";
	std::cout << "Energy points: " << ScavTrap::_energyPoints << " ";
	std::cout << "Attack damage: " << FragTrap::_attackDamage << std::endl;
}
