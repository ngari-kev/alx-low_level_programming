#include "main.h"
/**
 *more_numbers - print 0-14 followed by a new line 10x
 *
 *
 */
void more_numbers(void)
{
	int i = 0, j = 0;
	char str[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0, 1, 1, 1, 2, 1, 3, 1, 4};

	while (i <= 9)
	{
		j = 0;
		while (j <= 19)
		{
			_putchar(str[j] + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
