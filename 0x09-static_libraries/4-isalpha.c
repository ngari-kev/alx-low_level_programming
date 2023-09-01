#include "main.h"
/**
*_isalpha - checks if variable is alphabetic
*@c: character in question
*
*Return: 1 if c is alphabet and 0 if otherwise
*/
int _isalpha(int c)
{
	if (((c >= 65) && (c <= 97)) || ((c >= 97) && (c <= 122)))
		return (1);
	else
		return (0);
}
