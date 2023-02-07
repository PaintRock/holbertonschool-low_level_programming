#include "main.h"
/**
 *rev_string - fx that prints a string
 *followed by a new lin and prints
 *@s: new line
 *Return: void
 */
void _puts(char *str)
{
	while (*str > 0)
		(*str++);
			_putchar ('\n');
}
