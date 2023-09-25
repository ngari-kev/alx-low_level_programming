#include <stdio.h>
/**
  *main - prints sum of multiples of 3 and 5
  *Return: 0
  */
int main(void)
{
	int n = 0, sum = 0;

	for (n; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d", sum);
	return (0);
}
