#include <stdio.h>
/**
*main - prints out the alphabets in lowercase and a newline
*can only use putchar twice
*Return: 0 (Success)
*/
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
