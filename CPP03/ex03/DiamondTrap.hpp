#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string const name);

		DiamondTrap(DiamondTrap const& diamondTrap);
		DiamondTrap& operator=(const DiamondTrap& diamondTrap);

		void attack(const std::string& target);
		void whoAmI(void);
};

#endif