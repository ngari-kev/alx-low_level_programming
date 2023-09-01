/**
*main - prints number of arguements
*@argc: number of arguements
*@argv: pointer to first element
*Return: 0
*/
#include "main.h"
int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc);
	return (0);
}
