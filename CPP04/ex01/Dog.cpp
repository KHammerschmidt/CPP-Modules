#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default constructor Dog called!" << std::endl;
	this->setType("Dog");
	this->_brainAttribute = new Brain();
}

Dog::~Dog(void)
{
	delete this->_brainAttribute;
	std::cout << "Destructor Dog called." << std::endl;
}

Dog::Dog(const Dog& dog)
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->_brainAttribute = new Brain();
	*this = dog;
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "Dog copy assignment overload operator called." << std::endl;

	this->setType(dog.getType());
	*this->_brainAttribute = *dog._brainAttribute;
	return *this;
}
