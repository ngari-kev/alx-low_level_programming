#include "main.h"

/**
*print_alphabet_x10 - prints a-z and a new line
*
*
*Return: 0 (Success)
*/
void print_alphabet_x10(void)
{
	int i;/*counter for the 10 times*/
	char a;/*alphabet variable*/

	for (i = 0; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
