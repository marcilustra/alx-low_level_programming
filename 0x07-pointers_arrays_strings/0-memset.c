#include "main.h"

/**
 * _memset - function to fill mem with constant.
 * @s: pointer to character
 * @b: char parameter that will change
 * @n: position of array/ index
 * Return: *s (succ)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
