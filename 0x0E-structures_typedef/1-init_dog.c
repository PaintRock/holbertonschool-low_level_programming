#include "dog.h"
#include <stdio.h>
/**
 *init_dog -- initialize a variable of type struct dog
 *@d: dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner name
 *Return: null if no dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
