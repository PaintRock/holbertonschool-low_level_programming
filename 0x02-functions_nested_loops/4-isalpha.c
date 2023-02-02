#include <ctype.h>
/*
*File: 4-isalpha.c
*
*Auth:  A. Adel Knode
*/
#include "main.h"
/**
* int _islower(int c); Finds lowercase 'c'.
*
* Return: 1 if int c is an alphabet character
* and 0 if other.
*/
int _isalpha(int c)
{
	if (((c <= 'a') && (c >= 'z')) || ((c <= 'A') && (c >= 'Z')))
return (1);
else
return (0);

}
