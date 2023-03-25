#include "lists.h"
/**
 *dlistint_len -- fx that returns the number of elements in a linked dlistint_t
*list
*@h: the elements
*Return: the number of elements
*
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
