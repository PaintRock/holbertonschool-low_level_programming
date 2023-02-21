#include "main.h"
/**
 * is_prime_number - prints string in reverse
 * @n: string
 * Return: no
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else if (n % i != 0)
		return (is_prime_number((n, i -1)));
			return (0);
}
