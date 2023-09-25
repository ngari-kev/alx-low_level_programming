#include <stdio.h>
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
