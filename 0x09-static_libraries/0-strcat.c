#include "holberton.h"
#include <stdio.h>

/**
 *_strcat - Concatenate two strings
 *@dest: The destination string
 *@src: Source string
 *
 *Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)

{
	int i_1 = 0;
	int i_2 = 0;

	while (dest[i_1] != '\0')
	{
		i_1++;
	}
			while (src[i_2] != '\0')
			{
				dest[i_1 + i_2] = src[i_2];
				i_2++;
			}

			dest[i_1 + i_2]  = '\0';
			return (dest);
}
