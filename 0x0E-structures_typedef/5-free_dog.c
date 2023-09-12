#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - frees memory
 *@new_dog: pointe to dog instance
 *
 */
void free_dog(dog_t *new_dog)
{
	if (new_dog == NULL)
	{
	}
	else
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
	}
}
