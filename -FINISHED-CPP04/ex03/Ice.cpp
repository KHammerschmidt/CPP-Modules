#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Default constructor Ice called." << std::endl;
}

Ice::~Ice()
{
	// std::cout << "Destructor Ice called." << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	*this = other;
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
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
