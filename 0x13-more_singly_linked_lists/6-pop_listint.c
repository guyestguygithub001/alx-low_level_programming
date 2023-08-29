#include "lists.h"

/**
 * pop_listint - gets rid of head node of linked list.
 * @head: pointer to the first element in the linked list
 *
 * Return: all data in elements deleted,
 * or 0 if list is found empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
