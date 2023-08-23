#include "main.h"
/**
*puts_half - prints last half of a string
*@str: string literal to be processed
*
*
*/
void puts_half(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	x--;
	if (x % 2 == 1)
	{
		x = (x - 1) / 2;
	}
	else
	{
		x = x / 2;
	}
	x += 1; /* Moves to the correct index*/
	while (*(str + x) != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
