#include "main.h"
/**
 * leet - runs through a string
 * then encodes the string into
 * 1337 form, I turns in 1, e into 3
 * and so on.
 * @s: String being worked on.
 * Return: String encoded (Succ).
 */
char *leet(char *s)
{
	int i;
	int j;
	int k;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (l[j] != '\0')
		{
			if (s[i] == l[j])
			{
				k = j;
				s[i] = e[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}
