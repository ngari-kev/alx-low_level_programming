#include "main.h"
/**
*_calloc - allocates a block of contiguos memory and sets to 0
*@nmemb: number of array elements
*@size: size of each of the elements (i.e could be int, char,...)
*
*Return: NULL at failure or pointer to first byte of initialized memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *ptr;/*char is necessary so as to set every byte*/

	if (nmemb == 0 || size == 0)/*checking if nmemb or size are 0*/
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < nmemb * size; a++)
	{
		/* Settig every byte to 0 */
		ptr[a] = 0;
	}
	return (ptr);
}
