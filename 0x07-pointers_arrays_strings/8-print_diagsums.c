#include "holberton.h"
/**
 * print_diagsums - prints the sum of the
 * @a: dont try this at home
 * @size: of the array
 * Return: Nada
 */
void print_diagsums(int *a, int size)
{
	int sum0, sum1;
	int row, col;

	sum0 = 0;
	sum1 = 0;
	row = 0;
	col = 0;
	while (row < size)
	{
		sum0 += *(a + row * size + col);
		sum1 += *(a + row * size - 1 - col);
	col++;
	row++;
}
printf("%d, %d\n", sum0, sum1);
}
