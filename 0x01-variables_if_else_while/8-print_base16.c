#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 16
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char d = '0';

	while (d <= '14')
	{
		putchar(d);
		d++;
	}

	char c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
