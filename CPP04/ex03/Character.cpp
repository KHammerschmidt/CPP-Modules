#include "Character.hpp"

Character::Character(std::string const name)
	: _name(name), _inventory()
{
	std::cout << "Constructor Character called." << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Destructor Character called." << std::endl;
}

Character::Character(const Character& other)
{
	*this = other;
}

Character& Character::operator=(const Character& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i];
	}

	return *this;
}

std::string const& Character::getName(void) const {	return (this->_name); }



void Character::unequip(int idx)
{
	if (this->_inventory[idx])
		this->_inventory[idx] = NULL;	//nullptr forbidden?
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
			return ;
		}
	}

	std::cout << "Inventory is full!" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}