#include <stdio.h>
/**
  *fib - prints fibonnaci numbers to a specified value
  *@n: specified value
  */
void fib(int n)
{
	long int a = 1, b = 2, c = 0;
	int i = 1;

	printf("%ld, ", a);
	i++;
	printf("%ld, ", b);
	i++;

	while (i <= n)
	{
		if (i == n)
		{
			c = a + b;
			printf("%ld\n", c);
		}
		else
		{
			c = a + b;
			a = b;
			b = c;
			printf("%ld, ", c);
		}
		i++;
	}
}


/**
  *main - prints fibonacci series to a specified limit
  *Return: 0
  */
int main(void)
{
	fib(50);
	return (0);
}
