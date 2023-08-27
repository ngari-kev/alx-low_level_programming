/**
*_strcmp - compares two strings
*@s1: string 1
*@s2: string 2
*
*Return: 0 if equal, -15 if s1 is greater
*and 15 if s2 is s2 is greater
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, t = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			t = s1[i] - s2[i];
			if (t > 0)
				return (t);
			else if (t < 0)
				return (t);
			else if (t == 0)
				return (t);
		}
	}
	return (t);
}
