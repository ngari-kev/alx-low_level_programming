#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of a variable number of integers
 * @n: The number of integers to sum
 * @...: The list of integers to sum
 * Return: The sum of the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = 0;
	unsigned int j;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (j = 0; j < n; j++)
	{
		i += va_arg(args, int);
	}
	va_end(args);
	return (i);
}
