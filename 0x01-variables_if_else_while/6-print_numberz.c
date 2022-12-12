#include <stdio.h>

/**
 * main - Prints single digit numbers
 * wihtout using printf
 * from 0 to 9
 * instead using recursion
 *
 * Return: 0 (Success)
 */

int main(void)
{
	/*Variable initialization*/
	int num;

	for (num = 0; num < 10; num++)
	putchar(num + '0');

	putchar('\n');

	return (0);
}
