#include <stdio.h>

/*
 *File: 1-alphabet.c
 *
 *Auth:  A. Adel Knode
 */


#include "main.h"

/**
 * print_alphabet -  Prints the alphabet in lowercase.
 *
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');

}
