#include "lists.h"

/**
 * sum_listint - To calculate sum of total data in listint_t list.
 * @head: first node in the linked list
 *
 * Return: Overall sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
