#include "main.h"
/**
*malloc_checked - allocates memory space and checks if it was successful
*@b: number of bytes to be created
*
*
*/
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(sizeof(int) * b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
