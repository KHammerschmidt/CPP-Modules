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
iterator MutantStack<T>::iterator::begin(void) { return c.begin(); }

template<typename T>
iterator MutantStack<T>::iterator::end(void) { return c.end(); }

template<typename T>
const_iterator	MutantStack<T>::const_iterator::begin(void) const { return c.begin(); }

template<typename T>
const_iterator	MutantStack<T>::const_iterator::end(void) const { return c.end(); }

template<typename T>
reverse_iterator	MutantStack<T>::reverse_iterator::begin(void) { return c.end(); }

template<typename T>
reverse_iterator	MutantStack<T>::reverse_iterator::end(void) { return c.begin(); }

template<typename T>
const_reverse_iterator	MutantStack<T>::const_reverse_iterator::begin(void) const { return c.end(); }

template<typename T>
const_reverse_iterator	MutantStack<T>::const_reverse_iterator::end(void) const { return c.begin(); }
