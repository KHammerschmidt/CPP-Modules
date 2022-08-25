#include "MutantStack.hpp"
#include <list>

int listFunc()
{
	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << "mlist top: " << mlist.back() << std::endl;
	std::cout << "mlist size: " << mlist.size() << std::endl;
	mlist.pop_back();
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);

	std::cout << "mlist top: " << mlist.back() << std::endl;
	std::cout << "mlist size: " << mlist.size() << std::endl << std::endl;

	std::list<int>::iterator it = mlist.begin();
	std::list<int>::iterator ite = mlist.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "List value: " << *it << std::endl;
		++it;
	}
	std::list<int> s(mlist);

	return 0;
}

int main()
{
	std::cout << "\t \t FIRST TEST WITH STACK" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Mstack top: " << mstack.top() << std::endl;
	std::cout << "Mstack size: " << mstack.size() << std::endl;
	mstack.pop();
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	std::cout << "Mstack top: " << mstack.top() << std::endl;
	std::cout << "Mstack size: " << mstack.size() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << std::endl;
	while (it != ite)
	{
		std::cout << "Mstack val: " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);


	std::cout << std::endl << "\t \t SECOND TEST WITH LIST" << std::endl;
	listFunc();
	return 0;
}

// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);

// 	std::cout << mstack.top() << std::endl; mstack.pop();
// 	std::cout << mstack.size() << std::endl;

// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737); //[...] mstack.push(0);

// 	MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;

// 	while (it != ite) {
// 		std::cout << *it << std::endl;
// 	++it; }

// 	std::stack<int> s(mstack); return 0;
// }