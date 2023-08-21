#include "main.h"
/**
*print_rev - prints in reverse to stdout
*@s: reference/address
*/
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	while (x != -1)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}

