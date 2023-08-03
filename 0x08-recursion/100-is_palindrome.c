#include "main.h"

int isit_palind(char *s, int i, int len);
int _strlength(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (isit_palind(s, 0, _strlength(s)));
}

/**
 * _strlength - length of a string
 * @s: input string
 *
 * Return: length
 */
int _strlength(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlength(s + 1));
}

/**
 * isit_palind - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int isit_palind(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (isit_palind(s, i + 1, len - 1));
}
