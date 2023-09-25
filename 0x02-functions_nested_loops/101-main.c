#include<stdio.h>
#include "main.h"
/**
  *main - prints multiples of 3 and 5 in specified range
  *Return: 0 (Success)
  */
int main(void)
{
	int o = 0;

	o = multiples(1024);
	printf("%d\n", o);
	return (0);
}
