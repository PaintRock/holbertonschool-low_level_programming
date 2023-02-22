#include "main.h"
/**
 *_puts - fx that prints a string
 *followed by a new lin and prints
 *@str: new line
 *Return: void
 */
void _puts(char *str)
{
	while (*str != 0)
	_putchar(*str++);
	_putchar('\n');
}
