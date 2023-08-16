#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main -The output of the program is:
*    The string "Last digit of", followed by
*    n, followed by
*    the string "is", followed by
*       : the string "and is greater than 5"
*       : the string "and is 0"
*       : the string "and is less than 6 and not 0"
*Return: 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 2;
	if (last_digit > 5)
	{
		puts("Last digit of %d is %d and is greater than 5", n, last_digit);
	}
	else if (last_digit == 0)
	{
		puts("Last digit of %d is %d 0", n, last_digit);
	}
	else if (last_digit < 6)
	{
		puts("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	}

	return (0);
}
