#include "main.h"
/**
*print_sign - checks the sign of a number
*@n: number to be checked
*
*Return: 1 if >0, 0 if c is 0 and -1 if c<0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		return (0);
}
