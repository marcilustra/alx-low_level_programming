#include "main.h"
#include <stdio.h>

/**
 * main - fizz: % 3 = 0
 * Buzz: % 5 = 0
 * FizzBuzz % 5 && % 3 = 0
 *
 *
 * Return: 0 (Succ)
 */
int main(void)
{
	int x = 1;

	while (x < 101)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", x);
		}

		if (x != 100)
		{
		printf(" ");
		}
		x++;
	}
	printf("\n");
	return (0);
}
