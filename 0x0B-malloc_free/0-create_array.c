#include "main.h"
/**
 *create_array - creates an array of characters and
 *initializes to a specific character
 *@size: number of bytes to create
 *@c: specific character value to initialize to
 *Return: pointer to start of memory
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		a = malloc(sizeof(char) * size);
		if (a == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
	}
	return (a);
}
