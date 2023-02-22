#include "main.h"
/**
 * _memset - a funct ion that fills bytes
 *@s: pointer
 *@n: number of bytes
 *@b: filling
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
