#include "holberton.h"
#include <stdio.h>

/**
 *_strncat - Concatenate two strings
 *@dest: The destination string
 *@src: Source string
 *@n: bytes
 *Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)

{
	int i_1 = 0;
	int i_2 = 0;

	while (dest[i_1] != '\0')
	{
		i_1++;
	}
			while (i_2 < n && src[i_2] != '\0')
			{
				dest[i_1 + i_2] = src[i_2];
				i_2++;
			}

			dest[i_1 + i_2]  = '\0';
			return (dest);
}
