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
		printf("-, %d", n);
	}
	else if (n > 0)
	{
		printf("+, %d", n);
	}
	else
	{
		printf("0, %d", n);
	}
	return (0);
}
