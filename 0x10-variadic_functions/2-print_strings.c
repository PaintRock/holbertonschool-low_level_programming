#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *print_numbers - a function that prints numbers with a new line
 *@n: the number of integers passed to the function
 *@separator: the string to be printed between numbers
 *Return: 0 if there is no parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *s;

va_start(ap, n);
for (i = 0; i < n; i++)
{
s = va_arg(ap, char *);
if (s)
printf("%s", s);
else
printf("(nil)");
if (i <  n - 1 && separator)
printf("%s", separator);
}
va_end(ap);
printf("\n");
}
