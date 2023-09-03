#include "main.h"
/**
*main - multiplies two numbers
*If the program does not receive two arguments:
*your program should print Error, followed by a new line, and return 1
*@argc: number of arguments
*@argv: pointer to first argument
*Return: 0 (Success) or 1 (Error)
*/
int main(int argc, char *argv[])
{
	int a, b;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	return (0);
}
