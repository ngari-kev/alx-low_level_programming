#include "function_pointers.h"
/**
  *int_index - passes an array to a function for comparison
  *@array: pointer to array
  *@size: size of array
  *@cmp: pointer to function
  *Return: i if index matches, -1 if size <= 0 or if no match found
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return -1;
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return i;
	}
	return -1;/* No matching element found.*/
}
