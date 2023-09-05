#include "main.h"
/**
 *more_numbers - print 0-9 followed by a new line 10x
 *
 *
 */
void more_numbers(void)
{
	int i = 0, j = 0;

	while (j < 10)
	{
		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				i++;
			}
			else
			{
				_putchar(i + '0');
				i++;
			}
		}
		_putchar('\n');
		i = 0;
		j++;
	}
}
