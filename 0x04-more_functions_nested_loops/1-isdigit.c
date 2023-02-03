#include "main.h"

/**
 * _isdigit - checks for 0 thru 9
 * @c: input
 * Return: returns 1 if int c is a digit
 */

int _isdigit(int c)

{
	if (c < 47 || c > 58)
		return (1);
	else
		return (0);
}
