#include "main.h"

/**
 * rev_string - reverses a string
 * unlike the previous one
 * this one does so in memory
 *@s: the string to be reversed.
 */

void rev_string(char *s)
{
	int i, j, len;
	char c1, c2;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	j = len - 1;
	i = 0;

	while (j > i)
	{
		c1 = s[i];
		c2 = s[j];
		s[i] = c2;
		s[j] = c1;
		j--;
		i++;
	}
}
