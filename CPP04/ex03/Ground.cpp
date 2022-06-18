#include "Ground.hpp"

void	Ground::Add(AMateria* materia)
{
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
		delete tmp->save;
		delete tmp;
	}
}

Ground::Ground()
{
	std::cout << "Default constructor Ground called." << std::endl;
}

Ground::~Ground()
{
	cleanUp();
	std::cout << "Destructor Ground called." << std::endl;
}