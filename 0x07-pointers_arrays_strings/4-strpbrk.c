#include "main.h"
/**
 *_strpbrk- searches a string
 *@s: pointer to string
 *@accept: pointer to string
 *
 *description: function locates the
 *first occcurence in the string s
 *of any of the bytes in the string
 *accept
 *
 *Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int x = 0;

	while (*(s + i))
	{
		for (x = 0; *(accept + x); x++)
		{
			if (*(s + i) == *(accept + i))
				return (s + i);
		}
		i++;
	}
	return (0);

}
