#include "main.h"

/**
 * _isalpha - check the code for ALX School students.
 *
 * @c: integer that parses the ascii value of the letter
 * being tested.
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
