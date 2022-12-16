#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints diagonal line n-long.
 * @n : length of diagonal
 * Return: 0 (void succ).
 */
void print_diagonal(int n)
{
	int i;
	int length;

	for (i = 0; i < n; i++)
	{
		for (length = 0; length < i; length++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
