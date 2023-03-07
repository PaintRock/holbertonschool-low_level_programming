#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a character
 * @arg: the argument to print
 */
void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - prints an integer
 * @arg: the argument to print
 */
void print_int(va_list arg)
{
	int i = va_arg(arg, int);

	printf("%d", i);
}

/**
 * print_float - prints a float
 * @arg: the argument to print
 */
void print_float(va_list arg)
{
	double d = va_arg(arg, double);

	printf("%f", d);
}

/**
 * print_string - prints a string
 * @arg: the argument to print
 */
void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *separator = "";

	print_fn_t print_fn[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (print_fn[j].fn != '\0')
		{
			if (print_fn[j].fn == format[i])
			{
				printf("%s", separator);
				print_fn[j].print(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
