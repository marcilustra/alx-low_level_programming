#include <stdio.h>

/**
* main - Prints the alphabet widout e and q.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char my_char;

	for (my_char = 'a'; my_char <= 'z'; my_char++)
	{
		if (my_char != 'e' && my_char != 'q')
		putchar(my_char);
	}
	putchar('\n');

	return (0);
}
