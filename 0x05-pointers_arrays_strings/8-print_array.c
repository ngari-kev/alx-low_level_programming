#include <stdio.h>
/**
*print_array - prints the elements of an array on n items
*@a: array pointer
*@n: number of elements
*/
void print_array(int *a, int n)
{
	int x = 0;

	for (x = 0; x < n - 1; x++)
	{
		printf("%d, ", *(a + x));
	}
	printf("%d\n", *(a + x));
}
