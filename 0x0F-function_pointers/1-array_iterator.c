#include "function_pointers.h"
/**
  *array_iterator - calls a function to perform specified task on array
  *@array: pointer to an array
  *@size: size of array
  *@action: functio pointer
  */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && size != 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
