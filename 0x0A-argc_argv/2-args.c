#include <stdio.h>
/**
 * main - print the number -
 * @argc: for got the name
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

		if (argc > 1)
			for (count = 1; count < argc; count++)
				printf("%s\n", argv[count]);
	return (0);
}
