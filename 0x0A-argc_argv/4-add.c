#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print the number -
 *@argc: count
 *@argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, c, sum = 0;

	if (argc < 2)
	{
	printf("0\n");
	return (0);
}
	for (a = 1; a < argc; a++)
	{
		for (c = 0; argv[a][c] != '\0'; c++)
	{
		if (!isdigit(argv[a][c]))
		{
		printf("Error\n");
		return (1);
		}
		}
		sum += atoi(argv[a]);
		}
	printf("%d\n", sum);
return (0);
}
