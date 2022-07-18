#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string 
 * @s2: 2nd string 
 * Return: 1 if true, 0 if false
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			x = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (x);
}
