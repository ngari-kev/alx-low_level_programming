#include "main.h"
/**
*rev_string - reverses the values in a string
*
*@s: pointer to start of string
*/
void rev_string(char *s)
{
	int x = 0, a = 0;
	char t;

	while (s[x] != '\0')
		x++;
	x--;
	for (a = 0; a <= x; x--)
	{
		t = *(s + a);
		*(s + a) = *(s + x);
		*(s + x) = t;
		a++;
	}
}
