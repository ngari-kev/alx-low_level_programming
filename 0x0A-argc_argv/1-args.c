/**
*main - prints number of arguements
*@argc: number of arguements
*@argv: pointer to first element
*Return: 0
*/
#include "main.h"
int main(int argc, char *argv[])
{
	int i = 0;

	argv++;
	if (argc > 0)
	{
		i = argc - 1;
	}
	else if (argc == 0)
	{
		i = 0;
	}
	printf("%d", i);
	return (0);
}
