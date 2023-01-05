#include "main.h"

/**
 * _strlen_recusrsion - size
 * @s: string pointer
 * Return: string length
 */

int _strlen_recusrsion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recusrsion(++s));
}
