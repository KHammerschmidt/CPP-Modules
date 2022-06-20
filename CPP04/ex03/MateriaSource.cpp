#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	// std::cout << "Default Constructor MateriaSource called." << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}

	// std::cout << "Destructor MateriaSource called." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) //: IMateriaSource(other)
{
	*this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			this->_inventory[i] = other._inventory[i];
	}

	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;

	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break ;
		}
	}
		// std::cout << "New Materia type " << m->getType();
		// std::cout << " has been stored at index " << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	}

	return NULL;
}


