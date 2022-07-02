/**
 * File: 8-print_base16.c
 * Auth: Neo M
*/
#include <stdio.h>
/**
 *main - entry point to the program 
 *
 * Description -it outputs all the numbers of base 16 in lower case
 *
 * Return: Always 0 for success
*/
int main(void)
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
