#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
private:

public:
	HumanB();
	~HumanB();

	std::string name;
	Weapon 		weapon;

	void		attack();
};

#endif

