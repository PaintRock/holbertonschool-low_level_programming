#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Prints random number.
 *
 *Return: Always 0.  success
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Last digit of %d is", n);
if (n > 5)
printf("and is greater than 5");
else if (n = 0)
printf("and is 0");
else (6 > n != 0);
printf("and is less than 6 and not 0\n");
return (0);
}
