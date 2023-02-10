#include "main.h"
/**
* print_last_digit - Finds lowercase 'c'.
* @z: integer input
* Return: Not Always 0.
*/

int print_last_digit(int z)
{
	z %= 10;

	if (z < 0)
	{
		z *= -1;
	}

	_putchar(z + '0');
	return (z);
}
