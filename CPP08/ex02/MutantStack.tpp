#include "MutantStack.hpp"

template<typename T>
MutantStack::MutantStack() : std::stack<T> {}

template<typename T>
MutantStack::~MutantStack() {}

template<class T>
MutantStack::MutantStack(const MutantStack& other) : std::stack<T>(other) {}

template<typename T>
MutantStack<T>& MutantStack::operator=(const MutantStack<T>& other)
{
	*this = other;
	return *this;
}

template<typename T>
iterator MutantStack<T>::iterator::begin(void) { return this->c.begin(); }

template<typename T>
iterator MutantStack<T>::iterator::end(void) { return this->c.end(); }

	iterator 				begin();// { return this->c.begin(); };
	iterator 				end(); // { return this->c.end(); };
	const_iterator			begin(); // const {return this->c.begin(); };
	const_iteratoriterator	end(); // const { return this->c.end(); };
	reverse_iterator		begin() { return this->_c.end(); };
	reverse_iterator		end() { return this->_c.begin(); };
	const_reverse_iterator	begin() const { return this->c.end(); };
	const_reverse_iterator	end() const { return this->c.begin(); };