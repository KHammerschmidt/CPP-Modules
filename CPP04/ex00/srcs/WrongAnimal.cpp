#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 	: _type("WrongAnimal") {
	std::cout << "Default constructor WrongAnimal called!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor WrongAnimal called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	this->_type = other._type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) { *this = other; }

std::string WrongAnimal::getType(void) const { return (this->_type); }

void	WrongAnimal::makeSound(void) const {
	std::cout << "A wrong animal will make the wrong sound!" << std::endl;
}

void	WrongAnimal::setType(std::string type) { this->_type = type; }
