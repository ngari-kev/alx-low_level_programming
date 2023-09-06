/**
*main - prints number of arguements
*@argc: number of arguements
*@argv: pointer to first element
*Return: 0
*/
#include "main.h"
int main(int argc, char *argv[])
{
	int p = 0;

	(void)argv;/*ignore argv*/
	if (argc > 0)
	{
		p = argc - 1;
		printf("%d\n", p);
	}
	return (0);
}
