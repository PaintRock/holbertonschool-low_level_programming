#include "lists.h"
/**
 * add_node -- a function that adds a new knode at the beginning of a list_t
 *list
 *@head: the beginning of the singly-listed list
 *@str: the string to be added
 *Return: the address of the new element or NULL if it failed
 *str needs to be duplicated
 *allowed to use strdup
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i;

	for (i = 0; str[i]; i++)
	{
		new = malloc(sizeof(list_t));
	}
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
