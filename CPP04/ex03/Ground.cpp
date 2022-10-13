#include "Ground.hpp"

Ground::Ground()
{
	head = NULL;
	// std::cout << "Default constructor Ground called." << std::endl;
}

Ground::~Ground()
{
	cleanUp();
	// std::cout << "Destructor Ground called." << std::endl;
}

Ground::Ground(const Ground& other)
{
	*this = other;
}

Ground& Ground::operator=(const Ground& other)
{
	this->head = other.head;
	this->current = other.current;

	return *this;
}

void	Ground::Add(AMateria* materia)
{
	if (materia == NULL)
		return ;

	node* ptr = new node;

	if (head == NULL)
		head = ptr;
	else
		current->next = ptr;
	ptr->save = materia;
	ptr->next = NULL;

	current = ptr;
}

void	Ground::cleanUp(void)
{
	node* tmp = head;

	while (head)
	{
		tmp = head;
		head = head->next;
		if (tmp->save)
		{
			delete tmp->save;
			tmp->save = NULL;
		}
		if (tmp)
		{
			delete tmp;
			tmp = NULL;
		}
	}
	// std::cout << "Inventory cleaned up!" << std::endl;
}

void	Ground::RemoveGroundObj(AMateria* m)
{
	if (!head)
		return ;

	node* tmp = head;
	while (tmp)
	{
		if (tmp->save == m)
		{
			tmp->save = NULL;
			return ;
		}
		tmp = tmp->next;
	}
}

Ground::node* Ground::head = NULL;
Ground::node* Ground::current = NULL;
