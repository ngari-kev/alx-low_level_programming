#include <stdio.h>
/**
*main - prints out the alphabets in lowercase
*then uppercase and a newline
*can only use putchar twice
*Return: 0 (Success)
*/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
