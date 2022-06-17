#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default constructor WrongCat called.!" << std::endl;
	this->setType("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	this->setType(other.getType());
	return *this;
}

WrongCat::WrongCat(const WrongCat& other)
{
	*this = other;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "The wrong cat makes: oink!" << std::endl;
}