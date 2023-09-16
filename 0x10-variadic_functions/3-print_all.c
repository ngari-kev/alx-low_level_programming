#include "variadic_functions.h"
/**
  *print_all - variadic function that prints the args as per specified format
  *@format: types of arguments passed to the function
  */
void print_all(const char * const format, ...)
{
	int i;
	double f;
	char c, *s;
	va_list ap;

	const char *p = format;/*Because it won't be possible to increment format*/
	va_start(ap, format);
	while (*p != 0)
	{
		switch (*p)
		{
			case 'c':
				c = va_arg(ap, int);
				printf("%c, ", c);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d, ", i);
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f, ", f);
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					printf("(nil)");
				if (s != NULL)
					printf("%s, ", s);
				break;
			default:
				break;
		}
		p++;
	}
	va_end(ap);
	printf("\n");
}
