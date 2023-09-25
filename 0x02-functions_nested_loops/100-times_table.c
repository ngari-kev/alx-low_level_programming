#include <stdio.h>

/**
 * print_times_table - prints the 0 to n times table so long as 15<n>0
 *@n: limit for the times table
 */
void print_times_table(int n)
{
	int i, j, k = 0;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
				{
					printf("%d", k);
				}
				else if (k >= 10)
				{
					printf("%4d", k);
				}
				else
				{
					printf("%4d", k);
				}
				if (j < n)
				{
					printf(",");
				}
			}
			printf("\n");
		}
	}
}
