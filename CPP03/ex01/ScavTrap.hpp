#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap	: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& scavTrap);
		ScavTrap& operator=(ScavTrap const& scavTrap);

		void	attack(const std::string& target);
		void	guardGate();
		
		~ScavTrap();
};

#endif