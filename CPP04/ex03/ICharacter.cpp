#include "ICharacter.hpp"

ICharacter::~ICharacter()
{
	// for (unsigned int i = 0; i < this->_idx; i++)
	// 	delete this->_inventory[i];

	std::cout << "Destructor ICharacter called." << std::endl;
}
