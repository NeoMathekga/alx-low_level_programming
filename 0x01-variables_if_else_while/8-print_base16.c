/**
 * File: 8-print_base16.c
 * Auth: Neo M
*/
#include <stdio.h>
/**
 * main -it outputs all the numbers of base 16 in lower case
 *
 * Return: Always 0.
*/
int main (void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
