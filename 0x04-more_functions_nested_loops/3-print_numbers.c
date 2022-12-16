#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Prints int from 0 to 9
 * then prints anew line
 * Return: 0 (for succ)
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
