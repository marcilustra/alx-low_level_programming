#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: Program prints single digit numbers from 0 to 9
 * delimited by a commba and space
 * followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
