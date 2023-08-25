#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function to add new node for the start of linked list
 * @head: pointer doubled for list_t list
 * @str: a differnet string to be added to node
 *
 * Return: Returns an address to another element, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;

return (*head);
}
