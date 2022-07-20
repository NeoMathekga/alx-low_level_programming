#include "main.h"
/**
 *_puts_recursion- prints a string
 *@s: string to print
 *
 *Description: prints a sring
 *followed by a newline
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	unsigned int i = 0;

	if (*s)
	{
		_putchar(*s);
		i++;
		_puts_recursion(s + i);

	}
	else
	{
		_putchar('\n');
	}
}
