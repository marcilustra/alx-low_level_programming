#include  <stdio.h>
/**
 * print_alphabet_x10 - First function
 * main - entry point
 *
 * Description - Prints the alhabets 10 times
 *
 * Return: void (Success)
 */
void print_alphabet_x10(void);
int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i <= 9)
	{
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		c = 'a';
		putchar('\n');
		i++;
	}
}
