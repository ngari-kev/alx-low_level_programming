#include <stdio.h>
/**
*main - prints out the alphabet apart from e and q
*then uppercase and a newline
*can only use putchar twice
*Return: 0 (Success)
*/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e')
			continue;
		if (a == 'q')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
