#include "main.h"

/**
 * swap_int -> given two integers swa the values they are holding
 * @a: pointer to a
 * @b: pointer to b
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
