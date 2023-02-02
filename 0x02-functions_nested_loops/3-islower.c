#include <ctype.h>
/*
*File: 3-alphabet.c
*
*Auth:  A. Adel Knode
*/
#include "main.h"
/**
*int _islower(int c); checks for lowercase
*@c: single lertter input
* Return: returns 1 if int c is lowercase.
*/
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
