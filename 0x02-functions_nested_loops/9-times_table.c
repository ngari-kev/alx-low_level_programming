#include <stdio.h>

/**
 * times_table - prints the 0 to 9 times table
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if (j == 0)
			{
				printf("%d", k);
			}
			else if (k >= 10)
			{
				printf("%3d", k);
			}
			else
			{
				printf("%3d", k);
			}
			if (j < 9)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}
