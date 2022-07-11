#include <stdio.h>
#include "main.h"
#include "Holberton.h"
/**
 * reset_to_98 - uses a pointer
 *@n: this is a pointer
 * Return: void
 */
void reset_to_98(int *n);

void main(void);
{
	int i;

	reset_to_98(&i)
	_putchar("%d", i);
}

void reset_to_98(int *n)
{
	*n = 98;
}
