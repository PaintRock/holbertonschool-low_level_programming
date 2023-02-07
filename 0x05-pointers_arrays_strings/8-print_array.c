#include "main.h"
/**
 *print_array - write a fx that prints n
 *elements of an array of integers
 *@a: array
 *@n: element
 *Return: void
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
		while (n != 0)
			printf("%d , ", a[m]);
	printf("\n");
}
