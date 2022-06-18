#include "IMateriaSource.hpp"

IMateriaSource::~IMateriaSource()
{
	// for (int i = 0; i < 4; i++)
	// {
	// 	if (this->_inventory[i])
	// 		delete (this->_inventory[i]);
	// }
	std::cout << "Deconstructor IMateriaSource called." << std::endl;
}
