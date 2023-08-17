#include "main.h"

/**
*main - prints alphabet followed by new line
*@a - character variable
*Return: 0 (Success)
*/

void print_alphabet(void);
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
	return (0);
}
