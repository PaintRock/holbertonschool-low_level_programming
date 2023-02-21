#include <stdlib.h>
#include <stdio.h>
/**
* create_array - creates an array and initializes it
*@size: size of the array
*@c: dunno
*Return: 0 or array location maybe
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(size * sizeof(char));
		if (p == NULL)
		{
			return (NULL);
		}
		while (i < size)
		{
			p[i] = c;
			i++;
		}
	}
	return (p);
}
