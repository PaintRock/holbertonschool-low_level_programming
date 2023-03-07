#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog : free the memory allocated by the previous problem
 *@d: pointer to the space to be freed
 *Return: a void
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
