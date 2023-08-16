#include <stdio.h>
/**
*main - prints out the alphabets in lowercase and a newline
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
	puts("\n");
	return (0);
}
