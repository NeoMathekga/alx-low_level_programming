#include <stdio.h>
/**
 *main - main block
 *Description: it outputs all the numbers of base 16
 *Return: 0
*/
int main(void)
{
	int number;
	char letter;
	
	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
