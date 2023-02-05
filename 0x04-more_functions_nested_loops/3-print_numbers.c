#include "main.h"
/**
 *print_numbers - print the numbers 0-9
 */
void print_numbers(void)
{
int numi = 0;
while (numi <= 9)
{
_putchar ('0' + numi);
numi++;
}
_putchar('\n');
}
