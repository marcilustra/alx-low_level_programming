#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Prints int from 0 to 14
 * then prints anew line
 * this it does 10 times
 * Return: 0 (for succ)
 */
void more_numbers(void)
{
	int c;
	int d;

	for (d = 0; d < 10; d++)
	{
		c = 0;
		while (c <= 14)
		{
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
			}
				_putchar(c % 10 + '0');
			c++;
		}
	_putchar('\n');
	}
}
