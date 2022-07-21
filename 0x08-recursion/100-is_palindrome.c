#include "main.h"

/**
 * _strlen_recursion - gets the length of string
 * @s: string input
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 0 or 1
 */

int is_palindrome(char *s)

int lastchar =  _strlen_recursion(s);

return (palidrome2(s, 0, lastchar - 1, lastchar % 2));

}

/**
 * palindrome2 - checks if string is equal with length - i
 * @s: passed string
 * @length: length of s
 * Return: 0 or 1
 */
int palidrome2(char *s, int length)
{
	if (*s != *(s + length))
		return (0);
	else if (*s == 0)
		return (1);
	return (palidrome2(s + 1, length - 2));
}
