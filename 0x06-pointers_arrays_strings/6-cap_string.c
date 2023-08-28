/**
*cap_string - changes the string to sentence case
*@str: string to be worked on
*
*
*Return: pointer to the string after change case
*/
char *cap_string(char *str)
{
	int i = 0, j = 0;
	char x;

	/* Find the length of the input string*/
	while (str[i] != '\0')
		i++;
	for (j = 1; j < i; j++)
	{
		x = str[j]; /* Assign the current character to 'x'*/
		/*Check if the previous character is one of the specified delimiters*/
		if (str[j - 1] == ' ' || str[j - 1] == ',' || str[j - 1] == ';' ||
		str[j - 1] == '.' || str[j - 1] == '!' || str[j - 1] == '?' ||
		str[j - 1] == '"' || str[j - 1] == '(' || str[j - 1] == ')' ||
		str[j - 1] == '{' || str[j - 1] == '}')
		{
			/* Check if the current character is a lowercase letter*/
			if (x >= 'a' && x <= 'z')
			{
				str[j] = x - 32; /* Convert to uppercase*/
			}
		}
	}
	return (str);
}
