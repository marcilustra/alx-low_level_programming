#include "main.h"

/**
 * _strchr - prints out the pointer matching the first occurence of c
 * @s: pointer holding address of c
 * @c: character to match
 * Return: *S (Succ)
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
