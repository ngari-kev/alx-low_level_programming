#include "main.h"
/**
 *_strdup - diplicates a string
 *@str: string to duplicate
 *
 *
 *Return: pointer to start of duplicate or null if error is encountered
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0, a = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	i++;
	dup = malloc(sizeof(char) * i);
	if (dup == NULL)
		return (NULL);
	for (a = 0; a < i; a++)
	{
		dup[a] = str[a];
	}
	dup[i] = '\0';
	return (dup);
}
