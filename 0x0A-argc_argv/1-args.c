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

	p = argc - 1;
	(void)argv/*ignore argv*/
	printf("%d", p);
	return (0);
}
