#include "Base.hpp"

Base::~Base() {}
A::A(){}
B::B(){}
C::C(){}

Base* generate(void)
{
	srand(time(NULL));
	int val = rand();
	switch((val % 3) + 1)
	{
		case 1:
			return (new A());
		case 2:
			return (new B());
		case 3:
			return (new C());
	}
	return NULL;
}

void identify(Base* p)
{
	Base* ptr; // = dynamic_cast<A>(ptr);
	if (ptr = dynamic_cast<A>(ptr)) //ptr != nullptr)
		std::cout << "type A" << std::endl;
	else if

	if (dynamic_cast<A>(ptr))


}

void identify(Base& p)
{

}