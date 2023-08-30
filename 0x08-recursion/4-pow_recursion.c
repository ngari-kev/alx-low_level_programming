/**
*_pow_recursion - raises x to the power of y
*@x: number to be raised to the power of y
*@y: number of times x will be multiplied by itself
*Return: x to the power of y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
