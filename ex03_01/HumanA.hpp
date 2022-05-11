#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	HumanA();

public:
	HumanA(std::)
	~HumanA();

	std::string name;
	Weapon 		weapon;

	void		attack();
};

#endif