#include "Cat.hpp"

Cat::Cat(void) : AAnimal()
{
	std::cout << "Default constructor Cat called!" << std::endl;
	this->setType("Cat");
	this->_brainAttribute = new Brain();
}

Cat::~Cat(void)
{
	delete this->_brainAttribute;
	std::cout << "Destructor Cat called." << std::endl;
}

Cat::Cat(const Cat& cat)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->_brainAttribute = new Brain();
	*this = cat;
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "Cat copy assignment overload operator called." << std::endl;
	this->setType(cat.getType());
	*this->_brainAttribute = *cat._brainAttribute;
	return *this;
}

