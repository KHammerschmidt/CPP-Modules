#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->_type = "AMateria";
	std::cout << "Default constructor AMateria of type" << this->getType() << " called!"  << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "Destructor AMateria called." << std::endl;
}

AMateria::AMateria(const AMateria& other)
{
	*this = other;
}

AMateria::AMateria(std::string const& type)
	: _type(type)
{
	std::cout << "Type-Constructor AMateria of type " << this->getType() << " called!" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
		this->_type = other._type;

	return *this;
}

std::string const& AMateria::getType(void) const{ return this->_type; }

void	AMateria::use(ICharacter& target)
{
	if (target.getName() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (target.getName() == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

