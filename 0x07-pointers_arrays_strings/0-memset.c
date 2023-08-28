/**
*_memset - initializes memory to a specified value and size
*@b: value to initialize to
*@s: pointer to memory set
*@n: number of bytes to use
*Return: pointer to memory set
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
