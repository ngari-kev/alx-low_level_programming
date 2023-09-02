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

	if (*argv[argc] > 0)
	{
		argc--;
		i++;
	}
	printf("%d", i);
	return (0);
}
