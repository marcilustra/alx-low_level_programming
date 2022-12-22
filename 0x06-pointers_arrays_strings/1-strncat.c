#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * using n bytes from src
 * and src doesnt need to be null-terminated if it has n or more bytes
 * @dest: Destination
 * @src: Source string
 * @n: Length in bytes
 * Return: Pointer to dest (Succ)
 */

char *_strncat(char *dest, char *src, int n)
{
	/**
	 * len: holds the string length of src
	 * j: holds the value to comapre with n
	 */
	int len, j;

	len = strlen(dest);
	j = 0;

	while (j < n && *src)
	{
		dest[len + j] = *src;
		src++;
		j++;
	}
	dest[len + j] = '\0';
	return (dest);
}
