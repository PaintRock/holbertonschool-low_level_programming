#include "lists.h"
/**
 *add_node_end -- function that adds a new node at the end of a list_t
 *list
 *@head: the head of the list?
 *@str: the original list?
 *Return: the address of the new element or NULL if it failed.
 *
 **/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;
size_t count;

new = malloc(sizeof(list_t));

if (new == NULL)
	return (NULL);

new->str = strdup(str);

for (count = 0; str[count]; count++)
;
new->len = count;
new->next = NULL;
temp = *head;

if (temp == NULL)
{
*head = new;
}
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
}
return (*head);
}
