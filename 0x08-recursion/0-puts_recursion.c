#include "main.h"
/**
*_puts_recursion - prints a string to the standard output
*@s: pointer to start of string
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
