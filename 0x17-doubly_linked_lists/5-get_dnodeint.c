#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t linked list..
 * @head: pointer to head of list..
 * @index: index of node to look for, starting from 0 ..
 * Return: null node..
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
