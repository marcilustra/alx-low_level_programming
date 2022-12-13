#include "main.h"
/**
 * print_sign - Prints out + or  -
 * depending on the value of the int n
 *
 * @n: Number passed into the argument for the function
 *
 * Return: 0 (Success)
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar("-");
		return (-1);
	}
	else if (n > 0)
	{
		_putchar("+");
		return (1);
	}
	else
	{
		_putchar("0");
		return (0);
	}
	return (0);
}
