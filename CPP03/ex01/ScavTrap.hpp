#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap	: public ClapTrap
{
	private:

	public:
		ScavTrap(void);
		~ScavTrap();


		ScavTrap(ScavTrap const& scavTrap);
		ScavTrap& operator=(ScavTrap const& scavTrap);

};

ScavTrap::ScavTrap(ScavTrap const& scavTrap)
{
	*this = scavTrap;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& scavTrap)
{

}

ScavTrap::ScavTrap(void)
	: ClapTrap()
{
	std::cout << "Constructor ScavTrap called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	:ClapTarp(name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
	: ~ClapTrap(void)
{
	std::cout << "Destructor ScavTrap called!" << std::endl;
}


#endif