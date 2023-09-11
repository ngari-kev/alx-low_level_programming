#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the details of an instance of teh dog class
 * @d: pointer to dog instance
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
