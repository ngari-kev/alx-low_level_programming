#include "main.h"
/**
  *get_bit - giets the bit at specified index
  *@n: number to get bit from
  *@index: index at which to get bit
  *Return: bit at index specified or -1 at error
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
