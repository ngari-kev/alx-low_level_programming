/**
*_strncat - joins src to dest.
*@n: number of elements to be apended to dest
*@src: string to be appended to dest
*@dest: string to receive src
*Return: pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, k = 0;
	char temp;

	while (dest[i] != '\0')
		i++;
	temp = dest[i];
	for (k = 0; k <= n - 1; k++)
	{
		dest[i] = src[k];
		i++;
	}
	dest[i] = temp;
	return (dest);
}
