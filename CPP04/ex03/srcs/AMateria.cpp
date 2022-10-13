#include "AMateria.hpp"

AMateria::AMateria(void) : _type("AMateria") {}
AMateria::~AMateria(void) {}

AMateria::AMateria(const AMateria& other) { *this = other; }
AMateria::AMateria(std::string const& type) : _type(type) {}

AMateria& AMateria::operator=(const AMateria& other)
{
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

