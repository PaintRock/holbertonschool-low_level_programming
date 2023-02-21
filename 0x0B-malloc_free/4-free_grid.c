
#include <stdlib.h>
#include <main.h>
/**
 * create_array - creates an array and initializes it
 *
char *create_array(unsigned int size, char c)

{
	unsigned int a;
	char *array;

a = 0;

	if (size <= 0)
		return (0);

		array = malloc(size);
	if (array == 0)
	printf("NULL");
		return (0);

	while (a < size)
	{
		array[a] = c;
		a++;
	}
	return (array);
}
