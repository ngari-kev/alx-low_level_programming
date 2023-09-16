#include "variadic_functions.h"
/**
 * print_strings - Print strings separated by a given separator.
 *
 * This function prints a variable number of strings, separated by the
 * specified separator. A newline character is added at the end.
 *
 * @separator: String between strings (NULL to omit).
 * @n: Number of strings.
 * @...: List of strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
