/**
*main - prints number of arguements
*@argc: number of arguements
*@argv: pointer to first element
*Return: 0
*/
#include "main.h"
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i <= argc; i++)
	{
		if (argv)
			printf("%d\n", i);
	}
	return (0);
}
