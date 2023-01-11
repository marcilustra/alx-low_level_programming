#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c;
	char *pc;

	c = 'A';
	pc = &c;

	printf("Character: %c.\nAddress: %p.\n", *pc, pc);
	printf("Character: %c.\nNew address: %p.\n", *pc, pc + 1);

	for (c = 'A'; c <= 'Z'; c++)
	{
		printf("Character: %c\nAddress: %p\n", *pc, pc);

		//INcrementing the address has some unintended consequences.
		//pc++;
	}
}
