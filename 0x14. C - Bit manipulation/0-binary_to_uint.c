#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (b[index] != '\0')
	{
		/*Checking that the content of the string is either 0 or 1*/
		if (b[index] != '0' && b[index] != '1')
			return (0);
		num = num << 1;
		num = num | (b[index] - 48);
		/**
		  *48 is the difference between the character
		  *and its corresponding int value
		  */
		index++;
	}
	return (num);
}
