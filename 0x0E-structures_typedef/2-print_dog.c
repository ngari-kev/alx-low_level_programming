#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the details of an instance of teh dog class
 * @d: pointer to dog instance
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else if (d->name == NULL)
	{
		d->name = "nil";
	}
	else if (d->owner == NULL)
	{
		d->owner = "nil";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

