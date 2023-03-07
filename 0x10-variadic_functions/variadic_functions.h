#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct print_ops
{
	char *op;
	void (*f)(va_list);
} po_op;


void pr_int(va_list);
void pr_char(va_list);
void pr_float(va_list);
void pr_str(va_list);


#endif
