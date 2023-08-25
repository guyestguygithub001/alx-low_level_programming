#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to print element for the list to belinked
 * @h: points towards list_t list to be printed
 *
 * Return: no. of nodes to print
 */
size_t print_list(const list_t *h)
{
size_t s = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
s++;
}

return (s);
}
