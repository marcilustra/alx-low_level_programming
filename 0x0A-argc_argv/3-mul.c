#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: count
 * @argv: vectors
 * Return: 0 (For succys)
 */

int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	printf("%d\n", (a * b));
	return (0);
}
