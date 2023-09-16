#include "variadic_functions.h"
/**
 * print_numbers - Prints integers separated by a given separator.
 *
 * This function accepts a variable number of integer arguments and prints them
 * to the standard output, separated by the specified separator string.
 * After printing all the numbers, a newline character is added to the output.
 *
 * @separator: The string to be printed between numbers (use NULL to omit).
 * @n: The number of integers to be printed.
 * @...: The list of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num = 0;
	unsigned int i = 0;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ptr, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
