#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_name - prints a name
 *@name: name to print
 *@f: not a clue
 *Return: may be void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
