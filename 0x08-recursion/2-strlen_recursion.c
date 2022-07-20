#include "main.h"
/**
*_strlen_recursion- returns *s length
*
*@s: pointer to string
*
*Description: function returns length of
*of a given string minus null terminator
*
*Return: length of string
*/
int _strlen_recursion(char *s)

{

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
