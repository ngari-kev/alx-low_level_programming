#include "main.h"
/**
  *print_binary - prints the binary representation of a number
  *@n: number to be printed in binary
  */
void print_binary(unsigned long int n)
{
	int i; /*number of bits in an unsigned long int*/
	int bit_to_print = 0;

	i = sizeof(unsigned long int) * 8; /*8 to get number of bits*/
	i -= 1; /*to get to the most significant bit position*/

	while (i >= 0)
	{
		bit_to_print = (n >> i); /*shifts to Most Significant Bit*/
		bit_to_print &= 1; /*bitwise AND to give 1 or 0*/
		_putchar(bit_to_print + 48);
		i--;
	}
}
