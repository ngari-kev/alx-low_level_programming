#include "main.h"
/**
 *print_line - prints a line to stdout
 *@n: length of the line
 *if n < 0, print \n
 *
 */
void print_line(int n)
{
	int i;

	if (n < 1)
	{
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
