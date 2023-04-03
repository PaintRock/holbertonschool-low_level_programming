#include "lists.h"
/**
 *print_dlistint_backward -- fx that prints all the elements of a
 *dlistint_t list
 *@h: the elements?
 *Return: the number of nodes
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t i;
	size_t temp;

	temp = malloc(sizeof(print_dlistint_backward));

	for (i = 0; h; i--)
	{
		printf("%d\n", h->n);
		h = h->prev;
	}
	return (i);
}
