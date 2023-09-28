#include "main.h"
/**
  *print_binary - prints the binary representation of a number
  *@n: number to be printed in binary
  */
void print_binary(unsigned long int n)
{
	int i; /*number of bits in an unsigned long int*/
	int bit_to_print = 0;
	int flag = 0;/*to check if we have a 1 to avoid leading 0*/

	i = sizeof(unsigned long int) * 8; /*8 to get number of bits*/
	i -= 1; /*to get to the most significant bit position*/

	if (n == 0)
		_putchar('0');
	while (i >= 0)
	{
		bit_to_print = (n >> i); /*shifts to Most Significant Bit*/
		bit_to_print &= 1; /*bitwise AND to give 1 or 0*/
		if (bit_to_print == 1)
		{
			flag = 1;
		}
		if (flag)
		{
			_putchar(bit_to_print + 48);
		}
		i--;
	}
}
