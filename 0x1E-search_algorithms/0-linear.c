#include "search_algos.h"

/**
* linear_search - searches for a value in an array
* @array: pointer to an array
* @size: length of the array
* @value: value to search for
* Return: index if value is present or -1 upon failure
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
