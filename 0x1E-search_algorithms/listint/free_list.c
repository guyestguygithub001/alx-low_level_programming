#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_list - Deallocates given singly linked list,
 *
 * @list: Points to linked list to be freed,
 */
void free_list(listint_t *list)
{
	listint_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_list(node);
	}
}

0x1E-search_algorithms/listint/print_list.c

#include <stdio.h>
#include "../search_algos.h"

/**
 * print_list - Prints content of listint_t,
 *
 * @list: Pointer to head of list,
 */
void print_list(const listint_t *list)
{
	printf("List :\n");
	while (list)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
	printf("\n");
}

