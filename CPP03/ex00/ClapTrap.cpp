#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: _name("_clap_trap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor ClapTrap called." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap called." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Name-Constructor ClapTrap with called!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& clapTrap)
{
	std::cout << "Copy constructor ClapTrap called!" << std::endl;

	*this = clapTrap;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& clapTrap)
{
	std::cout << "ClapTrap copy assignment overload operator called!" << std::endl;
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;

	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints >= 1)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!";
		std::cout << std::endl;

		this->takeDamage(1);
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left to attack!";
		std::cout << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_energyPoints -= amount;
	std::cout << "This action costs " << amount << " energy points. ";
	std::cout << "The total energy points are now " << this->_energyPoints << "." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints >= 1)
	{
		std::cout << "ClapTrap " << this->_name << " repairs itself ";
		std::cout << "and adds " << amount << " points to its health!";
		std::cout << std::endl;

		this->_hitPoints += amount;
		this->takeDamage(1);
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left to repair itself!";
		std::cout << std::endl;
	}
}


