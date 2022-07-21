#include "main.h"
/**
 * checker- Checks for prime
 * @n: integer parameter
 * @step: stepping value
 * Return: prime number or 0
 */
int checker(int n, int factor)
{
	if (n == step)
	{
		return (1);
	}
	else if (n % step == 0)
	{
		return (0);
	}
	return (checker(n, step + 1));
}

/**
 *is_prime_number- returns prime numbers
 *@n: input integer
 *
 *Description: function returns 1 if the
 *input integer is a prime number, otherwise
 *return 0
 *
 * Return: returns interger
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (checker(n, 2));
}
