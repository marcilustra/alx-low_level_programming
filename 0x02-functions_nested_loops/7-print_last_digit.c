#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Using modulo 10 we print
 * the last digit in an integer number
 *
 * @n: The argument of print_last_digit type int
 *
 * Return: (0) last digit (Success)
 */
int print_last_digit(int n)
{
	/*Hold the value of n for return*/
	int last_digit;

	last_digit = (n % 10);
	return (last_digit);
}
