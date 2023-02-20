#include <stdio.h>
/**
 * main - print the number -
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b = 0;

	if ((a = '\0') && (b = '\0'))
	{
	printf("Error\n");
	return (1);
}
	else
	{
		printf("%d", a * b);
	}
	return (0);
}
