#include  "main.h"
/**
 * print_alphabet_x10 - First function
 *
 * Description - Prints the alhabets 10 times
 *
 * Return: void (Success)
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i <= 9)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		_putchar('\n');
		i++;
	}
}
