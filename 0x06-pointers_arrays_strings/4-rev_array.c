#include "main.h"

/**
 * reverse_array - reverses the array elements.
 * @a: array of integers
 * @n: number of elements to swap
 * Return: null.
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
