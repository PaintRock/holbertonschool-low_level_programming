#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - function returns a pointer to a new string which is a dup
 * of the string 'str'.
 *@str: the original string
 * Memory for the new string is obtained with malloc, and can be freed with
 *free.
 *Return: NULL if str=NULL. The _strdup function returns a pointer to the
 *duplicated string on SUCCESS and a NULL if there was not enough mem.
 */
char *_strdup(char *str)
{
int i, l;
char *s;

l = 0;

if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
l++;
s = malloc(sizeof(char) * (l + 1));
if (s == NULL)
return (NULL);
s[i] = '\0';
while (i--)

s[i] = str[i];

return (s);
}
