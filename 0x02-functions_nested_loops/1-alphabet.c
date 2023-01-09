#include "main.h"

/**
 * print_alphabet - Function name
 *
 * Description: Prints the alphabet with new line
 *
 * Return: 0 (It is void, returns nothing)
 */
void print_alphabet(void)
{
	/*Variable declaration*/
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
