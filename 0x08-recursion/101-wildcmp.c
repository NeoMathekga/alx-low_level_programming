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
	switch(*s)
	{
	case (*s1 == '\0' && *s2 == '\0'):
	{
	return (1);
	break;
	}
	case (*s1 == '\0' && *s2 == '*'):
	{
	return (wildcmp(s1, s2 + 1));
	break;
	}
	case (*s1 == *s2):
	{
	return (wildcmp(s1 + 1, s2 + 1));
	break;
	}
	case (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)) && *s1 != '\0'):
	{
	return (1);
	break;
	}
	default:
		return (0);
	}
}
