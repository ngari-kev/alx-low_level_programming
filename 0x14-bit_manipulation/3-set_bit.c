#include "main.h"
/**
  *set_bit - sets a bit in specified index to 1
  *@n: pointer to an unsigned long int.
  *@index: position to set to 1
  *Return: 1 in success and -1 in failure
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = 1;
	if (index <= 63)
	{
		/*This makes sure at specified index, we set it to 1*/
		i = i << index;
		*n |= i;
	}
	else
		return (-1);
	return (1);
}
