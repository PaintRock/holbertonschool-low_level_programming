#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
int p;
char m;
for (p  = 0; p < 10; p++)
putchar((p % 10) + '0');
for (m = 'a'; m <= 'f'; m++)
putchar(m);
putchar('\n');
return (0);
}
