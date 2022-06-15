#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap : public FragTrap, ScavTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string &name);
};

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap(std::string& name)
{
	this->_name = name;
}

DiamondTrap::~DiamondTrap()
{
}


#endif