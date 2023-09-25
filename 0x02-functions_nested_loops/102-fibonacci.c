#include <stdio.h>
/**
  *fib - prints fibonnaci numbers to a specified value
  *@n: specified value
  */
void fib(int n)
{
	long int a = 1, b = 2, c = 0;
	int i = 2;

	printf("%ld, ", a);
	printf("%ld, ", b);
	while (i < n)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%ld, ", c);
		i++;
	}
	if (i == n)
	{
		printf("%ld\n", c);
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
