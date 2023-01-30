#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
int p;
 for (p  = 0x00; p < 0x16; p++)
putchar((p % 0xf) + '0');
putchar('\n');
return (0);
}
