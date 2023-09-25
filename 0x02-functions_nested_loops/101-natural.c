#include <stdio.h>
#include "main.h"
/**
  *main - prints sum of multiples of 3 and 5
  *Return: 0
  */
int main(void)
{
	int o = 0;

	o = multiples(1024);
	printf("%d\n", o);
	return (0);
}


/**
  *multiples - prints sum of multiples of 3 and 5
  *@n: range within which to check for multiples
  *Return: 0
  */
int multiples(int n)
{
	int i = 0, sum = 0;

	while (i < n)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	return (sum);
}
