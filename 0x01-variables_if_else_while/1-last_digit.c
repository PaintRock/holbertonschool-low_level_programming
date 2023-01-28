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
int n, dog;

srand(time(0));
n = rand() - RAND_MAX / 2;
dog = n % 10;
/* your code goes there */

if (n < 5)
{  
printf("Last digit of %d is %d and is greater than 5\n", n, dog);
}
else if (dog < 6 && dog != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dog);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, dog);
}
return (0);
}
