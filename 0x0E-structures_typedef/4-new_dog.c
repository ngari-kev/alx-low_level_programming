#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog instance
 * Return: pointer to new dog or null if it fails
 * @name: pointer to name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
		return (NULL);
	new_dog->age = age;
	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
		return (NULL);
	return (new_dog);
}
