/**
*_strlen_recursion - counts the number of characters is a string
*@s: string pointer
*Return: number of characters in the string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
