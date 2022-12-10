#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Program, reports whether
 * a number if positive or negative depending
 * on the output
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/*Integer variable initilization*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
