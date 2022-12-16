#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square size n
 * @n : The size of the square
 * Return: 0 (void succ)
 */
void print_square(int n)
{
	int x;
	int y;

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
