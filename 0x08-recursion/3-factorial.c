#include "main.h"

/**
 * factorial - print n!
 * @n: how far you wish to go
 * Return: n factorial (Succ)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
