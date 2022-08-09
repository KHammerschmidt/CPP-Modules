#include "Cure.hpp"

Cure::Cure()  : AMateria("cure")
{
	// std::cout << "Default constructor Cure called." << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Destructor Cure called." << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
	*this = other;

	// std::cout << "Copy constructor Cure called." << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	AMateria::operator=(other);

	return *this;
}

AMateria* Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

