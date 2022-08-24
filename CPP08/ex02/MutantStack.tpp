
template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other) : std::stack<T>(other) {}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other)
{
	*this = other;
	return *this;
}

// template<typename T>
// iterator MutantStack<T>::iterator::begin(void) { return c.begin(); }

// template<typename T>
// iterator MutantStack<T>::iterator::end(void) { return c.end(); }

// template<typename T>
// const_iterator	MutantStack<T>::const_iterator::begin(void) const { return c.begin(); }

// template<typename T>
// const_iterator	MutantStack<T>::const_iterator::end(void) const { return c.end(); }
