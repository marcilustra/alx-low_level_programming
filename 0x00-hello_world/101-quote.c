#include <unistd.h>

/**
 * main - writes to stdout
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\@ - Dora Koprar, 2015-10-19\n", 59);
	return (1);
}
