#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array using binary search
 * @array: pointer to the first element of the sorted array
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: the index of the value if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, center = 0;
	size_t right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		center = left + (right - left) / 2;
		
		print_array(array, left, right);

		if (array[center] == value)
		{
			return (center);
		}
		else if (array[center] < value)
		{
			left = center + 1;
		}
		else
		{
			right = center - 1;
		}
	}
	return (-1);
}

/**
 * print_array - prints the array within the specified bounds
 * @array: pointer to the first element of the array
 * @left: the starting index
 * @right: the ending index
 * Return: nothing
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i = 0;

    printf("Searching in array: ");
    for (i = left; i <= right; i++)
    {
        if (i > left)
        {
            printf(", ");
        }
        printf("%d", array[i]);
    }
    printf("\n");
}
