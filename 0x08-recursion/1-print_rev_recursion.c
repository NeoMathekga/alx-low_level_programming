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
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);

	}
}
