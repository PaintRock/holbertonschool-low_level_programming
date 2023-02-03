#include "main.h"

/**
 * _isdigit - checks for 0 thru 9
 * @c: input
 * Return: returns 1 if int c is a digit
 */

int _isdigit(int c)

{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}
