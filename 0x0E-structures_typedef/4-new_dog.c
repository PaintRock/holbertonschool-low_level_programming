#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *new_dog - a function that creates a new dog
 *@name: name of the new dog
 *@age: age of the new dog
 *@owner: name of the owner
 *Return: poop
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name;
	char *new_owner;
	int len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	len = 0;
	while (name[len] != '\0')
		len++;
	len++;
	new_name = malloc(len * sizeof(*owner));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	len = 0;
	while (name[len] != '\0')
		len++;
	len++;
	new_owner = malloc(len * sizeof(*name));
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_name, name);
	strcpy(new_owner, owner);
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
