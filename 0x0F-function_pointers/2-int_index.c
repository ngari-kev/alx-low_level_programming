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
	int a = 0, i = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		a = cmp(array[i]);
		if (a == 1)
			return (i);
	}
	if (i == size)
		return (-1);
	return (0);
}
