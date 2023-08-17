#include <stdio.h>
/**
*main - Numbers must be separated by ,, followed by a space
*then a new line
*Return: 0 (Success)
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
