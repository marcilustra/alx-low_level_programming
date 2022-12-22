#include "main.h"
/**
 * string_toupper - Turns all lowercase letters
 * of a string char* n to UPPERCASE.
 * @n: charcters of the string to turn.
 * Return: n (Succ)
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
