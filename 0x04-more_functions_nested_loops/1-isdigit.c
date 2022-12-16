#include "main.h"
#include <stdio.h>
/**
 * _isdigit - determines if a character is
 * a number based on c.
 * @c: the int passed as an argument
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
