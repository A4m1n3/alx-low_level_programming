#include "main.h"
/**
 * _strlen_recursion - the length of a string.
 * @s: The string input.
 *
 * Return: The length
 */
int _strlen_recursion(char *s)
{
	int longueur = 0;

	if (*s)
	{
		longueur++;
		longueur += _strlen_recursion(s + 1);
	}

	return (longueur);
}

