#include "holberton.h"

/**
 * print_chessboard - print chessboard
 * @a: pointer
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i = 0;
	unsigned int x = 0;

	while (x < 8)
	{
		i = 0;
		while (i < 8)
			_putchar(a[x][i++]);
		_putchar('\n');
		x++;
	}
}
