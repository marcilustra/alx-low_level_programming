#include "main.h"

/**
 * *_strcpy - copies the string deref'd
 * by a source pointer.
 *
 * @dest: destination pointer.
 * @src: source pointer.
 *
 * Return: pointer to destination (Succ).
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= length ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
