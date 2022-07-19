#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - generates random password
*
*Return : 0 for success
*/

int main(void)
{
	int code =0;

	int i = 0;
	int min = 32;
	int max = 126;
	while (i < 2772)
	{
		srand(time(0) + i);
		code = (rand() % (max - min + 1)) + min;
		if (( i + code) <= 2772)
		{
			printf("%c", code);
		 i = i + code;
		}
		else
			break;
	}
	if ( i < 2772)
	{
		code = 2772 - i;
		printf("%c", code);
	}
	return (0);
}
