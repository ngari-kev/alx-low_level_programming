/**
*main - prints number of arguements
*@argc: number of arguements
*@argv: pointer to first element
*Return: 0
*/
#include "main.h"

int main(int argc, char *argv[])
{
	int n, i;

	n = argc;
	for (i = 0; i <= n; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
