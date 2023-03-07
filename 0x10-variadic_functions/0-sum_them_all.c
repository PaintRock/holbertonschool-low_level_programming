#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - a function that returns the sum of all its parameters
 *@n: the parameter?
 *Return: 0 if there is no parameter
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
va_list list;
double int sum = 0;

if (n == 0)
{
return (0);
}
if (n == 0)
{
return (0);
}
va_start(list, n);
for (i = 0; i < n; i++)
{
sum += va_arg(list, int);
}
va_end(list);
return (sum);
}
