#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c : Letter being checked when argument is passed.
 * prints 0 if letter is not lowercase
 * 1 if true
 *
 * Return: Always 0
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
