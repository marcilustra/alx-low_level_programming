#include <stdio.h>

/**
 * main - Entry.
 * @argc: Count
 * @argv: Vectors
 * Return: 0 (For Succs)
 */

int main(int argc, char *argv[])
{
	/*counter*/
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	
	return (0);
}
