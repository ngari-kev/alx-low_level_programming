#include "main.h"
/**
*string_nconcat - concatenate two strings upto n of string 2.
*@s1: string 1.
*@s2: second string.
*@n: number of bytes to join to s1.
*Return: NULL at fialure or pointer to resulting sring.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0, len2 = 0;
	unsigned int totalLength;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);
	/* Ensure n is not greater than the length of s2*/
	if (n > len2)
		n = len2;
	totalLength = len1 + n + 1;
	ptr = malloc(totalLength);
	if (ptr == NULL)
		return (NULL);
	/*Copy characters from s1*/
	if (s1 != NULL)
		strcpy(ptr, s1);
	else
		*ptr = '\0'; /* Handle the case where s1 is NULL*/
	/* Concatenate characters from s2 up to n*/
	strncat(ptr, s2, n);
	return (ptr);
}

