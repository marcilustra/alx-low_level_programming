#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	int *p1, *p2;

	a = 45;
	p1 = &a;
	printf("A = %i. \nAddress: %p.\n", *p1, p1);

	//Manipulate the value using the pointer
	b = 90;
	*p1 = b;
	printf("A's new value = %i.\nAddress: %p.\n", *p1, p1);
}
