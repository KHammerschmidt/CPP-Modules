#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor ClapTrap called." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap called." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Constructor ClapTrap with std::string name called!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& clapTrap)
{
	std::cout << "Copy constructor ClapTrap called!" << std::endl;
	*this = clapTrap;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& clapTrap)
{
	this->name = clapTrap.name;
	this->hitPoints = clapTrap.hitPoints;
	this->energyPoints = clapTrap.energyPoints;
	this->attackDamage = clapTrap.attackDamage;

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


