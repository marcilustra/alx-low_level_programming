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

if (n < 0)
n = -n;
last_digit = (n % 10);
if (last_digit < 0)
last_digit = -last_digit;
_putchar(last_digit + '0');
return (last_digit);
}
