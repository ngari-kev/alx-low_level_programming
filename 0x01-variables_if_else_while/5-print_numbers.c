#include <stdio.h>
/**
*main - prints out numbers from 0 to 9
*then a new line
*Return: 0 (Success)
*/
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
