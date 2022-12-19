#include "main.h"
#include <stdio.h>
/**
 * swap_int - using dereferencing,
 * this function swaps the value of two integers
 * @a: the first int
 * @b: the second int
 *
 * Return: 0 (Succ)
 */
void swap_int(int *a, int *b)
{
	int hold = *a;
	*a = *b;
	*b = hold;
}
