#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints the reverse of a string
 * @s: the string passed
 * Return: reversed string (void Succ)
 */
void print_rev(char *s)
{
	int i;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
