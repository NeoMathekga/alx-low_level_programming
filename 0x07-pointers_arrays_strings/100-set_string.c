#include "main.h"

/**
 * set_string - sets the value of a pointer a char
 * @s: pointer to a pointer
 * @to: pointer to value
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
