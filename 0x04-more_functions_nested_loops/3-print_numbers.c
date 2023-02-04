#include "main.h"
/**
 *print_numbers - print the numbers 0-9
 */
void print_numbers(void)
{
	int numi;
	for (numi = 0; numi <= 9; numi++)
	{
		_putchar ('0' + numi);
	}
	_putchar('\n');
}
