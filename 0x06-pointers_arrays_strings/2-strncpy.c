/**
*_strncpy - copies src and appends to dest wrt the
*number of chars specified by n
*@n: number of bytes to append
*@dest: string 1
*@src: string to be appended to string 1
*
*Return: pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n - 1; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
