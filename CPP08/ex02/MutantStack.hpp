#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template<typedef T>
class MutantStack : public std::stack<T>
{
public:

	MutantStack() : std::stack<T>;
	MutantStack(const MutantStack& other) : std::stack<T>(other) {}
	~MutantStack();

	MutantStack<T>& operator=(const MutantStack<T>& other);

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::containter_type::const_iterator const_iterator;
	typedef typename std::stack<T>::conatiner_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator 				begin();
	iterator 				end();
	const_iterator			begin() const;
	const_iteratoriterator	end() const;
	reverse_iterator		begin();
	reverse_iterator		end();
	const_reverse_iterator	begin()const;
	const_reverse_iterator	end() const;
};

#include "MutantStack.tpp"

#endif