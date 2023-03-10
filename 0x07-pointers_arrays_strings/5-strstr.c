#include "holberton.h"
/**
 *_strstr - locates a substring of any of
 *@haystack: string
 *@needle: the thing in the string
 *
 * Return: pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, z, done;

	i = 0;
	z = 0;
	done = 0;
	while (haystack[i] != '\0')
	{
		if (needle[z] == haystack[i])
		{
			done = 1;
			z++;
		}
		else
		{
			done = 0;
			z = 0;
		}

		if (needle[z] == '\0' && done == 1)
			return ((haystack + i - z + 1));
		else if (needle[z] == '\0' && done == 0)
			return (haystack);
		i++;
	}
	return (NULL);
}
