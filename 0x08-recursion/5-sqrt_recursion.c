#include "main.h"

/**
 * root_calc - calculates sqrt
 * @n: integer
 * @i: interger
 *
 * Return: square root
 */
int root_calc(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (root_calc(n, i + 1));
}

/**
 *_sqrt_recursion- returns natural square root of a number
 *@n: passed number
 *
 *Return: squareroot
 */
int _sqrt_recursion(int n)
{	
	return (sqrt_modify(n, 1));
}
