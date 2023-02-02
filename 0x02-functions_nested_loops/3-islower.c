#include <ctype.h>
/*
*File: 3-alphabet.c
*
*Auth:  A. Adel Knode
*/
#include "main.h"
/**
* _islower(int c); Finds lowercase 'c'.
*
* Return: Not Always 0.
*/
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
