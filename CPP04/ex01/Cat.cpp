#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Default constructor Cat called!" << std::endl;
	this->setType("Cat");
	this->_brain = new Brain();
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Destructor Cat called." << std::endl;
}

Cat::Cat(const Cat& cat)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->_brain = new Brain();
	*this = cat;
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "Cat copy assignment overload operator called." << std::endl;
	this->setType(cat.getType());
	*this->_brain = *cat._brain;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "The cat makes: Miau!" << std::endl;
}
