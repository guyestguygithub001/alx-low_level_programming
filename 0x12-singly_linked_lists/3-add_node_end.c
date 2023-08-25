#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function wto add new node at the end of each linked list
 * @head: pointer doubles to list_t list
 * @str: strings to be added in new node
 *
 * Return: returns the address of new element, or NULL if failed to do so
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp = *head;
unsigned int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->len = len;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (temp->next)
temp = temp->next;

temp->next = new;

return (new);
}
