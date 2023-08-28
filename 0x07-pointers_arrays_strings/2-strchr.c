#include<stdio.h>
/**
*_strchr - checks for the occurrence of char c in a string
*@s: string literal
*@c: character to check in string
*
*Return: pointer to first occurrence or null if char c is not present
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
