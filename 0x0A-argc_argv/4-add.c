#include "main.h"
#include <ctype.h>
/**
 * main - a program that adds positive numbers
 * @argc: number of argumants passed to main
 * @argv: pointer to array of arguments passed to main
 *
 * Return: 0 (Success) 1 (Failure/Error)
 */

int main(int argc, char *argv[])
{
	int i = 0, a = 0, sum = 0, b = 0;

	if (argc > 0)
	{
		i = argc - 1;
	}
	for (a = 1; a <= i; a++)
	{
		if (isdigit(*argv[a]))
		{
			b = atoi(argv[a]);
			sum += b;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

