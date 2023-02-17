#include "holberton.h"

/**
 * _memcpy - function that copies bytes
 * @dest: dest
 * @src: src
 * @n: num to cpy
 *
 * Return: a pointer to a dest
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
