#include "main.h"
/**
 * print_line - print a horizontal line
 * @n: wtf
 * Return: void
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar ('_');
	}
	_putchar ('\n');
}
