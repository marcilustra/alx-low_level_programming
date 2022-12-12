#include <stdio.h>

/**
 * main - Prints single digit numbers
 * with each num on a new line
 * from 0 to 9
 *
 * Return: 0 (Success)
 */

int main(void)
{
	/*Variable init*/
	int my_int;

	my_int = 0;
	while (my_int < 10)
	{
		printf("%d", my_int);
		my_int++;
	}
	printf("\n");

	return (0);
}
