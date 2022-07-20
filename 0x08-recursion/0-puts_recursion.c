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
void _puts_recursion(char *s){
	unsigned int i = 0;

	while (*(s + i))
	{
		_putchar(*s);
			break;
	}
	_putchar('\n');
}
