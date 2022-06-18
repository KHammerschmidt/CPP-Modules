#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Default constructor Ice called." << std::endl;
}

Ice::~Ice()
{
	std::cout << "Destructor Ice called." << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	*this = other;

	std::cout << "Copy constructor Ice called." << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
	AMateria::operator=(other);
	
	return *this;
}

AMateria* Ice::clone(void) const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	// if (target._inventory[this->_idx])
		// AMateria::use(target);

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
