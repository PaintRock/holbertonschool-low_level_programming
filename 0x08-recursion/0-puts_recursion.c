#include "main.h"
/**
*_puts_recursion - fx that prints a string
*@s: the string
*Return: void
*/
void _puts_recursion(char *s)
{
int i;

i = 0;

if (s[i] != '\0')
{
_putchar(s[i]);
_puts_recursion(&s[i + 1]);
}
if (s[i] == '\0')
{
_putchar('\n');
}
}
