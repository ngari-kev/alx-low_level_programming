/**
*reverse_array - reverses content of array a
*@n: size of array
*@a: array to be reversed
*
*
*/
void reverse_array(int *a, int n)
{
	int x, y;/*x is a counter; y is a buffer*/

	n -= 1;
	for (x = 0; x < n; x++)
	{
		y = a[n];
		a[n] = a[x];
		a[x] = y;
		n--;
	}
}
