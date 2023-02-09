#include "holberton.h"
/**
* _strncpy - Copies
* @dest: storage
* @n: Max Bites
* @src: the source
* Return: A pointer
*/
char *_strncpy(char *dest, char *src, int n)

{
	int i = 0, source_len = 0;

	while (src[i++])
		source_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = source_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
