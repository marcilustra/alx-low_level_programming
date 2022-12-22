#include "main.h"
#include <stdio.h>
/**
 * _strcat - concantenates two strings
 * appends the \0 character at the end of the
 * new destination variable.
 *
 * @dest: the destination string variable
 * @src: tje spurce string
 * Return: Pointer to string dest (Succ)
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
