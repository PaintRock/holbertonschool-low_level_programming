#include "main.h"
/**
 *rev_string - fx that prints a string
 *followed by a new lin and prints
 *@s: line
 *Return: void
 */
void rev_string(char *s)
{
	int i, n;
	char a[40];
i = 0;
n = 0;

	while (*(s + i))
	{
		*(a + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
	*(s + i) = *(a + n);
	n++;
	i--;
}
}
