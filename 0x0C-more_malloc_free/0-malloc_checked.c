#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - returns a pointer
 *@b: returns a pointer
 *Return: a pointer to the allocated mem unless it fails then 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);


	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
