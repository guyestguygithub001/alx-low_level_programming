#include "lists.h"

/**
 * listint_len - funtion returns no. of elements in linked lists.
 * @h: the linked list for type listint_t to traverse.
 *
 * Return: no. of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
