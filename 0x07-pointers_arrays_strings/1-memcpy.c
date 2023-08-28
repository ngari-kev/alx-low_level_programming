/**
*_memcpy - copies n bytes from memory area src to memory area dest
*Return: a pointer to dest
*@dest: destination of what is copied from source
*@src: source of data
*@n: number of bytes to be copied
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
