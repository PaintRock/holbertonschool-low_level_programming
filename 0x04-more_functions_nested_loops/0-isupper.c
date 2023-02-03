#include "main.h"
/**
 *_isupper - checks
 *@c: int c
 *Return: returns 1 if int c is uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
