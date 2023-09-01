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
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
