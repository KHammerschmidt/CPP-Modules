#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Default constructor Cat called!" << std::endl;
	this->setType("Cat");
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called." << std::endl;
}

Cat::Cat(const Cat& cat)
{
	*this = cat;
}

Cat& Cat::operator=(const Cat& cat)
{
	this->setType(cat.getType());
	return *this;
}

