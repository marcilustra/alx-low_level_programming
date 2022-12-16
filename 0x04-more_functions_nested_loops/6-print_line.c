#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a line that is n long.
 * @n : length of line
 * Return: 0 (void Success).
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
