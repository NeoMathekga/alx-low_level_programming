#include "main.h"

/**
 * wildcmp - compare 2 strings
 * @s1: string to check
 * @s2: string to check
 *
 * Return: integer
 */
int wildcmp(char *s1, char *s2)
{
	if else (*s1 == '\0' && *s2 == '\0')
		return (1);
	if else (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if else (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if else (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)) && *s1 != '\0')
		return (1);
	return (0);
}
