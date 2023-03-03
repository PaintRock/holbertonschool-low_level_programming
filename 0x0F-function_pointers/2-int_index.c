#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *int_index - compares numbers in an index
 *@array: the array
 *@size: size of the array
 *@cmp: function that compares the integers?
 *Return: may be void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
{
	return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
	return (i);
}
}
return (-1);
}
