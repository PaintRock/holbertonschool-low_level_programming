#include "holberton.h"
/**
 *_strpbrk - locates the first occurance of any of
 * the bytes in accept
 *@s: string
 *@accept: dunno
 *
 * Return: pointer or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, z;

	i = 0;
	z = 0;
	while (s[i] != '\0')
	{
		z = 0;
		while (accept[z] != '\0')
		{
			if (s[i] == accept[z])
				return ((s + i));
			z++;
		}
		i++;
			}
	return (NULL);
}
