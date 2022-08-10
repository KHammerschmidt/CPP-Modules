#include "Base.hpp"

Base::~Base() {}

Base* generate(void)
{
	srand(time(NULL));
	int val = rand();
	switch((val % 3) + 1)
	{
		case 1:
			return (new A())
		case 2:
			return (new B());
		case 3:
			return (new C());
	}
	return NULL;
}

void identify(Base* p)
{

}

void identify(Base& p)
{

}