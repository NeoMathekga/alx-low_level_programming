#include "main.h"
/**
 *factorial- returns factorial of given number
 *@n: passed integer
 *
 *description: the function if n is lower than 0,
 *the function should return -1
 *to indicate an error Factorial of 0 is 1
 *
 * Return: factorial integer
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
