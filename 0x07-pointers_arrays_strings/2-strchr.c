#include "main.h"
/**
 * _strchr- locates a character in a string
 * @s: pointer to the string to search
 * @c: character to search for
 *
 * description: function finds and returns
 * the first occurence of the character c
 * in the string s, or NULL if the
 * character is not found
 *
 * Return: pointer to 1st occurence of c
 *
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return (0);
}
