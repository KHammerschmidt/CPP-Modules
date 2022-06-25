#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form Default", 72, 45),
	_target("no target")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form Default", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : Form("Robotomy Request Form Default", 72, 45)
{
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	this->_target = other._target;

	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::executeSubForm(void) const
{
	std::cout << "*** DRILLING NOISE ***" << std::endl;
	srand(time(NULL));

	int random = 1+ (rand() % 100);
	if (random % 2)
		std::cout << this->_target << " has been robotomized!" << std::endl;
	else
		std::cout << this->_target << " failed to be robotmized!" << std::endl;
}
