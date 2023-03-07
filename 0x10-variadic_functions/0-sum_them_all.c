#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - a function that returns the sum of all its parameters
 *@n: the parameter?
 *Return: 0 if there is no parameter
 */
int sum_them_all(const unsigned int n, ...)
{
va_list my_list;
unsigned int c;
int sum;

if (n == 0)
return (0);
va_start(my_list, n);
sum = 0;
c = 0;
while (c < n)
sum += va_arg(my_list, int);
c++;
va_end(my_list);
return (sum);
}
