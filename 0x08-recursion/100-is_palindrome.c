#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string parameter
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * review_palindrome - checks if string is equal with length - i
 * @s: string
 * @len: length of s
 * Return: 1 or 0
 */
int palindrome2(char *s, int len)
{
	if (*s != *(s + len))
		return (0);
	else if (*s == 0)
		return (1);
	return (palindrome2(s + 1, len - 2));
}

/**
 * is_palindrome - checks string
 * @s: string
 * Return: 1 or -1
 */
int is_palindrome(char *s)
{
	int len;

	length = _strlen_recursion(s);
	return (palindrome2(s, len - 1));
}
