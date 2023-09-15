#include "3-calc.h"
/**
  *op_add - function that adds two integers
  *@a: integer 1
  *@b: integer 2
  *Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - function that gets difference between two integers
  *@a: integer 1
  *@b: integer 2
  *Return: difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - function that multiplies two integers
  *@a: integer 1
  *@b: integer 2
  *Return: product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - function that divides one integer with another one
  *@a: integer 1
  *@b: integer 2
  *Return: result of the division of a and b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (99);
	}
	return (a / b);
}

/**
  *op_mod - function that gets remainder after division of two integers
  *@a: integer 1
  *@b: integer 2
  *Return: remainder of a divided by b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a % b);
}
