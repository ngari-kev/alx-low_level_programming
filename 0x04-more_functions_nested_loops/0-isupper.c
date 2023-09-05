/**
 *_isupper - checks if c is uppercase or not
 *@c: entry in question
 *
 *Return: 1 if upper and 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
