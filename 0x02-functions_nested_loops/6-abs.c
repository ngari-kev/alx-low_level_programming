#include "main.h"
/**
*_abs - returns an absolute value
*@i: value to be checked
*Return: absolute value
*/
int _abs(int i)
{
	if (i == 0)
		return (0);
	else if (i < 0)
		return (-1 * i);
	else
		return (i);
}
