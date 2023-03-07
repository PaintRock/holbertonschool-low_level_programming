#include "variadic_functions.h"
#include <stdarg.h>
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

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(ap, int));
	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
		va_end(ap);
}
