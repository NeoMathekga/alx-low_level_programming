#include "main.h"
/**
 *_print_rev_recursion- prints string
 *@s: string to print in reverse
 *
 *Description: function prints string
 *pointed to by s in reverse
 *
 *Return: void
 */
void _print_rev_recursion(char *s)
{
	unsigned int i = 0;
	unsigned int j = 0;

	if (*s)
	{
		i += j;
		j++;
		_print_rev_recursion(s + j);
	}
	else if (i > 0)
	{
		i--;
		_putchar(*s);
		_print_rev_recursion(s - i);
	}
}
