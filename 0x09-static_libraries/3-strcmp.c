#include "main.h"
/**
 *_strcmp - Compares pointers to two strings
 *@s1: pointer one
 *@s2: pointer two
 *
 * Return: complicated
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
