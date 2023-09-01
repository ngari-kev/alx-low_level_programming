#include "main.h"
/**
*_islower - checks if char is lowercase
*@c: - character in question
*Return: 1 (Lowercase) || 0 (uppercase)
*/
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
