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
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	if (d->age == 0)
	{
		printf("Name: %s\n", d->name);
		printf("Age: (nil)\n");
		printf("Owner: %s\n", d->owner);
	}
	if (d->owner == NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: (nil)\n");
	}

}
