#include "holberton.h"
/**
 * string_toupper - creates CHANGE
 *@dog: the string to CHANGE
 *
 * Return: A pointer to the change
 */
char *string_toupper(char *dog)
{
	int i = 0;

	while (dog[i])
	{
		if (dog[i] >= 'a' && dog[i] <= 'z')
			dog[i] -= 32;
		i++;
	}
	return (dog);
}
