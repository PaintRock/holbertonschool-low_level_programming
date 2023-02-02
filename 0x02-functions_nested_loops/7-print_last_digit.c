#include "main.h"
/**
* print_last_digit - Finds lowercase 'c'.
* @z: integer input
* Return: Not Always 0.
*/

int print_last_digit(int z)
{
	int d;

	d = (z % 10);

	if (z < 0)
	{
		d = (-1 * z);
	}

	_putchar(d + '0');
	return (d);
}
