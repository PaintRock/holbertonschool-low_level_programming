#include "lists.h"

/**
 *get_dnodeint_at_index - fx that returns the nth
 *node of a dlistint_t linked list.
 *@head: head pf the list
 *@index: index node
 *Return: node n of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (i++ == index)
			return (temp);
		i++;
		temp = temp->next;
	}
	return (NULL);
}
