#include "lists.h"

/**
 * add_nodeint - adding new node at the beginning of linked list.
 * @head: for pointer to first node on list.
 * @n: the data to put in new node
 *
 * Return: points to new node, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
