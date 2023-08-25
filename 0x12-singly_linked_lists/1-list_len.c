#include <stdlib.h>
#include "lists.h"

/**
 * list_len - for returning no. of elements for linked list
 * @h: points to list_t list
 *
 * Return: no. of elements for h
 */
size_t list_len(const list_t *h)
{
size_t n = 0;

while (h)
{
n++;
h = h->next;
}
return (n);
}
