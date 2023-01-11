#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c;
	char *pc;

	c = 'A';
	pc = &c;

	printf("Character: %c.\nAddress: %p.\n", *pc, pc);
}
