#include "Dog.hpp"

Dog::Dog(void) : AAnimal()
{
	std::cout << "Default constructor Dog called!" << std::endl;
	this->setType("Dog");
	this->_brain = new Brain();
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Destructor Dog called." << std::endl;
}

Dog::Dog(const Dog& dog)
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->_brain = new Brain();
	*this = dog;
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "Dog copy assignment overload operator called." << std::endl;

	this->setType(dog.getType());
	*this->_brain = *dog._brain;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "The dog makes: Wuff!" << std::endl;
}	