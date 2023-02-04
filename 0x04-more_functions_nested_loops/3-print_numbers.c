#include "main.h"
/**
 * print_numbers - print the numbers 0-9
 * followed by a new line
 * Return: 0 Always. SUCCESS
 */
void print_numbers(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
