#include "main.h"

/**
 * _memcpy - copies memory space rather than memory item
 * @dest: pointer to destination character
 * @src: source charactr
 * @n: size counter
 * Return: (destination) Succ
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
