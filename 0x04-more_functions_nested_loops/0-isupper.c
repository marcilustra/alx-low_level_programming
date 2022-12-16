#include "main.h"
#include <stdio.h>
/**
 * _isupper - Checks if c is uppercase
 * @c: the ascii int value of the character passed
 * Return: 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
