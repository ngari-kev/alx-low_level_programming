#include "3-calc.h"
/**
  *main - calls necessary function to run specified operator
  *@argc: number of arguments
  *@argv: array of arguments
  *Return: 0 (Success)
  */
int main(int argc, char *argv[])
{
	int n1, n2, result, (*f)(int,int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	operator = argv[2];
	f = get_op_func(operator);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = f(n1, n2);
	printf("%d\n", result);
	return (0);
}

