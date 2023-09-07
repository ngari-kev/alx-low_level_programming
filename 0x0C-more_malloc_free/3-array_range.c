#include "main.h"
/**
*array_range - creates a block of memory
*@min: lower boundary
*@max: upper boundary
*If min > max, return NULL
*If malloc fails, return NULL
*
*Return: pointer to memory and if it fails, NULL.
*/
int *array_range(int min, int max)
{
	int a;
	int *i;

	if (min > max)
	{
		return (NULL);
	}
	a = max - min + 1;
	i = malloc(a);
	if (i == NULL)
		return (NULL);
	return (i);
}
