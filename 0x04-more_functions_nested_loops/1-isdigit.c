/**
 *_isdigit - checks if parameter is a digit
 *@c: parameter to be examined
 *
 *
 *Return: 1 is c is a digit otherwise 0
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	return (0);
}
