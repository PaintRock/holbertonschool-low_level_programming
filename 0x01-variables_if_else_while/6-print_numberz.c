#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
int p;
for (p  = 0; p < 10; p++)
putchar((p % 10) + '0');
putchar('\n');
return (0);
}
