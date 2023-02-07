#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s: string length
 *Return: length
 */
int _strlen(char *s)
{
	int i = 0;
	while (*s++)
		(i++);
	return (i);
}
