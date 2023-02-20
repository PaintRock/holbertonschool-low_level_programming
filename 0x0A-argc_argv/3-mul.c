#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number -
 *@argc: count
 *@argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, product = 1;

if (argc != 3)
{
printf("Error\n");
return (1);
}

{
	for (a = 1; a < argc; a++)
	product *= atoi(argv[a]);
	printf("%d\n", product);
}

return (0);
}
