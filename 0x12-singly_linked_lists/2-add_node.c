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
	int len;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (len = 0; str[len] != 0; len++)
		;

	new->str = malloc(len + 1);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
