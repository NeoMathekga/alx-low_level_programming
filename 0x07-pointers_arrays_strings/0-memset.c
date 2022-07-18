#include "main.h"
/**
 *_memset - fills the first n bytes
 *@n: number of bytes to fill
 *@s: pointer to thee memory to be filled
 *@b: constant to fill *s with
 *
 *Description: The function fills n bytes of
 *memory area pointed to by s with constant b
 *
 *Return: return pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
