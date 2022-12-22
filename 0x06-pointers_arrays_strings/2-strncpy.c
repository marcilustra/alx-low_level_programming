#include "main.h"
/**
 * _strncpy - Copies a string from source to destination
 * @src: the source string
 * @dest: the destination string
 * @n: Length in bytes
 * Return: void (Succ)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
