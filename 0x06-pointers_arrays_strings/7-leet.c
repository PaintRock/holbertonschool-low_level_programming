#include "holberton.h"
/**
 *leet - jf
 *@dog: string
 *
 *Return: s
 */
char *leet(char *dog)
{
	char lt[10][2] = {
		{'a', '0' + 4}, {'A', '0' + 4},
		{'e', '0' + 3}, {'E', '0' + 3},
		{'o', '0'}, {'O', '0'},
		{'t', '0' + 7}, {'T', '0' + 7},
		{'l', '0' + 1}, {'L', '0' + 1}};
	int i = 0;
	int b = 0;

	while (dog[i] != '\0')
{
	while (lt[b][0] != '\0')
{
	if (dog[i] == lt[b][0])
		(dog[i] = lt[b][1]);
	b++;
}
	b = 0;
	i++;
}
	return (dog);
}
