#include "Character.hpp"

Character::Character(std::string const name) : _name(name), _inventory() {}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
}

Character::Character(const Character& other) { *this = other; }

Character& Character::operator=(const Character& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i];
	}
	return *this;
}

std::string const& Character::getName(void) const {	return (this->_name); }

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (this->_inventory[idx])
	{
		Ground::Add(this->_inventory[idx]);
		this->_inventory[idx] = NULL;
	}
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			Ground::RemoveGroundObj(m);
			return ;
		}
	}
	std::cout << "Inventory is full!" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !this->_inventory[idx])
	{
		std::cout << "No valid inventory spot!" << std::endl;
		return ;
	}
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}