#include "lists.h"

/**
 * print_listint - function to print elements for linked list
 * @h: for linked list of listint_t to be printed
 *
 * Return: no. of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
