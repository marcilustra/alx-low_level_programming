#include "main.h"
#include <stdio.h>
/**
 * _puts - Writes out a string
 * but not with printf; using _putchar defined in
 * main.h and properly defined in _putchar.c
 *
 * @str: string pointer passed
 * Return: literal string (Succ)
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
