#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriptiion: print_alphabet; Prints the alphabet with new line
 *
 * Return: 0 (Success)
 */

/*Function Prototype*/
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

/*Description: Prints all lowercase letter from a to z then a new line*/
void print_alphabet(void)
/*Print alphabet*/
{
	/*Variable declaration*/
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
