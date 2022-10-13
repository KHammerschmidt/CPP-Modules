#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default constructor Dog called!" << std::endl;
	this->setType("Dog");
}

Dog::~Dog(void) { std::cout << "Destructor Dog called." << std::endl; }

Dog::Dog(const Dog& dog) { *this = dog; }

Dog& Dog::operator=(const Dog& dog)
{
	this->setType(dog.getType());
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "The dog makes: Wuff!" << std::endl;
}	