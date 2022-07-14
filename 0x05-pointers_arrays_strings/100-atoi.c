#include "main.h"

/**
 * _atoi - converts string to int
 * @s: pointer to string
 * Description: this converts string to int less negatives
 * Return: int
 */

int _atoi(char *s)
{
	int i, x, y;

	x = 0;
	y = 1;

	for (i = 0; s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'); i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
	}

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			x = x * 10 + y * (s[i] - '0');
		if (x != 0 && !(s[i] >= '0' && s[i] <= '9'))
			return (x);
	}
	return (x);
}
