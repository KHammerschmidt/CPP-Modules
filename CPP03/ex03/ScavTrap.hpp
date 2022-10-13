#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap	: virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(bool);
		~ScavTrap();

		ScavTrap(ScavTrap const& scavTrap);
		ScavTrap& operator=(ScavTrap const& scavTrap);

		void	attack(std::string const& target);
		void	guardGate();
};

#endif