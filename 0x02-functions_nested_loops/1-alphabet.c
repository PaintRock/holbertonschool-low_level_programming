/*
 *File: 1-alphabet.c
 *
 *Auth:  A. Adel Knode
 */


#include "main.h"

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');

return (0);
}
