#include "Animal.hpp"

Animal::Animal(void)
	: _type("Animal")
{
	std::cout << "Default constructor Animal called." << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Destructor Animal called." << std::endl;
}

Animal::Animal(const Animal& animal)
{
	*this = animal;
}

Animal& Animal::operator=(const Animal& animal)
{
	this->_type = animal._type;
	return *this;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animals can make many different noises!" << std::endl;
}