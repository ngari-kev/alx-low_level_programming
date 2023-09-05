#include "main.h"
/**
 *print_most_numbers - prints 0-9 (apart from 2 and 4) followed by a new line
 *
 *
 *Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			i++;
		_putchar(i + '0');
	}
	_putchar('\n');
}

