#include "lists.h"

/**
 * free_listint - this frees the linked lists.
 * @head: listint_t the list to which to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
