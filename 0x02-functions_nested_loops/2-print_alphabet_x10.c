#include <stdio.h>
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
int main(void)
{
int count;
char letter;
while (count++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
}
putchar('\n');
return (0);
}
