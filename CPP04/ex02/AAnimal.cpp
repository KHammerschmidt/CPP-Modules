#include "AAnimal.hpp"

AAnimal::AAnimal(void)
	: _type("Animal")
{
	std::cout << "Default constructor Animal called." << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Destructor Animal called." << std::endl;
}

AAnimal::AAnimal(const AAnimal& animal)
{
	*this = animal;
}

AAnimal& AAnimal::operator=(const AAnimal& animal)
{
	this->_type = animal._type;
	return *this;
}

std::string AAnimal::getType(void) const
{
	return (this->_type);
}

void	AAnimal::setType(std::string type)
{
	this->_type = type;
}

void	AAnimal::makeSound(void) const
{
	// std::cout << "Animals can make many different noises!" << std::endl;
}