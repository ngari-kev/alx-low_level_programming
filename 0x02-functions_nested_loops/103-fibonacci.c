#include <stdio.h>
/**
  *fib - prints sum of even fibonacci series numbers below n
  *@n: specified value
  */
void fib(long int n)
{
	long int a = 1, b = 2, c = 0, sum = 2;

	while (c < n)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
			sum += c;
		}
	}
	printf("%ld\n", sum);
}


/**
  *main - calls fib()
  *Return: 0
  */
int main(void)
{
	fib(4000000);
	return (0);
}

