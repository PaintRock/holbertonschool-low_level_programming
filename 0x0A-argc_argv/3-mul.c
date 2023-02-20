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
int i, product;

if (argc != 3)
{
printf("Error\n");
return (1);
}
for (i = 0; i < argc; i++)
{
printf("%d", product);
product *= atoi(argv[i]);
}
return (0);
}
