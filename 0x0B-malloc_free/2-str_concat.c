#include "main.h"
/**
*str_concat - concatenates two strings
*@s1: string 1
*@s2: string 2
*
*Return: pointer to start of resulting string
*/
char *str_concat(char *s1, char *s2)
{
	char *dup;
	int i1 = 0, i2 = 0;/*length of string 1 and 2 respectively*/
	int a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i1] != '\0')
		i1++;
	while (s2[i2] != '\0')
		i2++;
	dup = malloc(sizeof(char) * (i1 + i2 + 2));
	if (dup == NULL)
		return (NULL);
	while (s1[a] != '\0')
	{
		dup[a] = s1[a];
		a++;
	}
	while (s2[b] == '\0')
	{
		dup[a] = s2[b];
		b++;
		a++;
	}
	dup[a] = '\0';
	return (dup);
}
