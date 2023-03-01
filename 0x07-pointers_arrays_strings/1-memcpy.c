#include "holberton.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination is where the memory bytes are copied to
 * @src: the memeory area that _memcpy copies to the destination
 * @n: the number of bytes copied from memory area
 *
 * Return: a pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
