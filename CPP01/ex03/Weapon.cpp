#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

Weapon::Weapon(std::string type)
{
	setType(type);
}

const std::string& Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

