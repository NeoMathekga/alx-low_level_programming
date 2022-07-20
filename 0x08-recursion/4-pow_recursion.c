#include "main.h"
/**
 *_pow_recursion- returns exponent of x to y
 *@x: base int
 *@y: power of x
 *
 *Return: returns x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
