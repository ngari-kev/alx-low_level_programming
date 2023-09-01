/**
*main - prints the name of the function
*@argc: number of arguments passed
*@argv: pointer to first element(first argument)
*Return: 0 (success)
*/
#include <stdio.h>
int main(int argc, char *argv[])
{
        if (argc)
		printf("%s\n", argv[0]);
        return (0);
}
