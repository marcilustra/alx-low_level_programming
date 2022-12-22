#include "main.h"
/**
 * reverse_array - Reverses an array.
 * @a: pointer to the array being worked on.
 * @n : the number of elements of the array.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	while (i < n)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
	}
}
