#include "holberton.h"
/**
 *_strncat - Concatenates two strings using
 *an inputted number of bytes from src
 *@dest: The string to be appended
 *@n: the other one
 *
 *Return: A pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i=0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
