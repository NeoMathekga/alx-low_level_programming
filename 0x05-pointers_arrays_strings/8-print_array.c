#include "main.h"
#include <stdio.h>

/**
 * print_array - output elements of an array
 * @a: pointer to array
 * @n: argument to func
 * Description: prints elements of array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
