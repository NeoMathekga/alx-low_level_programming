#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum two diagonals
 * @a: pointer to array of int
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
    int sum2 = 0;
    int i = 0;
    int x = 0;
    int count = 0;

	while (x < size)
	{
		for (i = 0; i < size; i++)
		{
			count = x * size + i;
			if (i == x)
				sum1 = sum1 + a[count];
			if ((i + x) == (size - 1))
				sum2 = sum2 + a[count];
		}
		x++;
	}
	printf("%d, %d\n", sum1, sum2);
}