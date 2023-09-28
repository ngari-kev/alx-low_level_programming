#include "main.h"
/**
  *flip_bits - counts number of bits it takes to move from one bit to another
  *@n: number 1
  *@m: number 2
  *Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	result = n ^ m;
	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}

