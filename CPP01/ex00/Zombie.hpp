#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
	Zombie();
public:
	Zombie(std::string name);			//entweder set name oder zeiten constructor?
	~Zombie();

	void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif