/**
*main - prints number of arguements
*@argc: number of arguements
*@argv: pointer to first element
*Return: 0
*/
#include "main.h"
int main(int argc, char *argv[])
{
	int i, j = 0;

	for (i = 1; i < argc; i++)
	{
		if (argv[i] != NULL)
		{
			j++;
		}
	}
	printf("%d", j);
	return (0);
}
