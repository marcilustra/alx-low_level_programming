#include "main.h"
#include <stdio.h>

int main (void)
{
	int p = 10;
	int a = 12;
	int b = 21;
	printf("Current value of p: %d\n", p);
	printf("Current value of a:%d\nCurrent value of b:%d\n", a, b);
	reset_to_98(&p);
	printf("New value of p: %d\n", p);
	return (0);
}
