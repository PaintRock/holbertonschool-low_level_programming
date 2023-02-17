#include "holberton.h"
/**
 *_strspn - fx that gets the length of a sub
 *@s: initial segment
 *@accept: not sure
 *
 *Return: number of bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, z, count, checker;

	i = 0;
	z = 0;
	checker = 0;
	count = 0;
	while (s[i] != '\0')
	{
		z = 0;
		checker = 0;
		while (accept[z] != '\0')
		{
			if (accept[z] == s[i])
			{
				count++;
				checker = 1;
				break;
			}
			z++;
				}
		if (checker == 0)
			return (count);
		i++;
	}
	return (count);
}
