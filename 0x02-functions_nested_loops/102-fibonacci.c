#include <stdio.h>
/**
  *fib - prints fibonnaci numbers to a specified value
  *@n: specified value
  */
void fib(int n)
{
	int a = 1, b = 2, c;

	printf("%d", a);
	while (b <= n)
	{
		printf(", %d", b);
		c = a + b;
		a = b;
		b = c;
		if (b > n)
		{
			printf("\n");
		}
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
