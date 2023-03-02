#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog -- prints a struct dog
 * @d: dog?
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "Name: nil\n");
	printf("Age: %6f\n", d->age >= 0 ? d->age : "Age: nil\n");
	printf("Owner: %s\n", d->owner ? d->owner : "Owner: nil\n");
}
