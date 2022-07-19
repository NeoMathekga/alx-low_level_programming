#include "main.h"
/**
 * _strstr - searches array needle in array haystack
 * @haystack: pointer to array where the functions will
 *seach
 * @needle: pointer to array to search
 * Return: pointer to the first character of the first
 * occurence
 * of the needle is returned. NULL: if needle not found.
 * Haystack if needle is an empty string
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int x = 0;
	char *p;

	if (needle[i] == '\0')
		p = haystack;
	while (haystack[i] && needle[x])
	{
		j = 0;
		while (haystack[i + x] == needle[x] && needle[x])
			x++;
		if (needle[x] == '\0')
			p = haystack + i;
		else
			p = 0;
		i++;
	}
	return (p);
}
