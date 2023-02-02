/*
*File: 1-alphabet.c
*
*Auth:  A. Adel Knode
*/
#include "main.h"
/**
* void print_alphabet_x10(void); Prints the alphabet lowercase ten times.
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int c = 0;
char l;
while (c++ <= 9)
{
for (l = 'a'; l <= 'z'; l++)
putchar(l);
}
putchar('\n');
}
