#include "main.h"
/**
*print_last_digit - prints the last digit of a number
*@i: number to be checked
*
*Return: last digit in a number
*/
int print_last_digit(int i)
{
	char last_digit;

	last_digit = i % 10;
	_putchar(last_digit);
	return (last_digit);
}
