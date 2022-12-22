#include "main.h"
/*#include <stdio.h>*/

/**
 * _strcmp - Compare two strings;
 * @s1: The 1st string
 * @s2: 2nd string
 * Return: The size (Succ)
 */
int _strcmp(char *s1, char *s2)
{
	int size = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		size = *s1 - *s2;

	return (size);
}
